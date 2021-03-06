import sys
import argparse
import numpy
from os import path
from metric.distance import EMD
from metric.utils import distribution, Grid4
from metric.mapping import KOC


def get_assets_default_folder():
    folder = path.join(path.dirname(__file__),
                       '..',  # examples
                       '..',  # python
                       '..',  # metric
                       'examples',
                       'mapping_examples',
                       'assets')
    return path.abspath(folder)


def generate_image(size: int, low: int, high: int):
    return numpy.random.exponential(scale=1/3.5, size=size) * (high - low) + low


def noise_image(image, low: int, high: int):
    # high exclusive
    return numpy.clip(image + numpy.random.randint(low=low, high=high+1, size=image.size), a_max=255)


def main():
    parser = argparse.ArgumentParser(description='KOC for MNIST example')
    parser.add_argument('--width', type=int, default=20, help='best width for grid')
    parser.add_argument('--height', type=int, default=20, help='best height for grid')
    parser.add_argument('--assets', default=get_assets_default_folder(), help='folder with assets')
    args = parser.parse_args()

    print('KOC for MNIST example have started')
    dataset = numpy.loadtxt(path.join(args.assets, 'mnist100.csv'),
                            max_rows=1000,
                            skiprows=1,
                            delimiter=',')
    dataset, labels = dataset[:, range(1, dataset.shape[1])],  dataset[:, 0]

    num_clusters = 10
    # random seed for repeatable results
    random_seed = 777
    # extra deviation of the clusters from original in the KOC
    sigma = 1.75

    cost_mat = EMD.ground_distance_matrix_of_2dgrid(cols=28, rows=28)
    max_cost = EMD.max_in_distance_matrix(cost_mat)
    distance = EMD(cost_mat, max_cost)
    simple_koc = KOC(graph=Grid4(args.width, args.height),
                     metric=distance,
                     #distribution=distribution.Uniform(0, 255),
                     anomaly_sigma=sigma,
                     start_learn_rate=0.8,
                     finish_learn_rate=0.0,
                     iterations=200,
                     nbh_start_size=4,
                     nbh_range_decay=2.0,
                     random_seed=random_seed)
    simple_koc.train(dataset, num_clusters)

    assignments = simple_koc.assign_to_clusters(dataset)
    print('assignments:', assignments)


"""
    # accuracy
    std::vector<std::vector<int>> clusters(11)
    for (auto i = 0; i < assignments.size(); ++i):
        clusters[assignments[i]].push_back(labels[i])

    std::vector<int> assignment_to_label(11, -1)
    for (auto i = 1; i < clusters.size(); ++i)
    {
        std::vector<int> labels_in_cluster(10)
        for (auto lbl : clusters[i]):
            labels_in_cluster[lbl] += 1
        std::vector<int>::iterator result = std::max_element(labels_in_cluster.begin(), labels_in_cluster.end())
        assignment_to_label[i] = std::distance(labels_in_cluster.begin(), result)
    }

    num_matched = 0
    for (auto i = 0; i < assignments.size(); ++i):
        if assignment_to_label[assignments[i]] == labels[i]:
            num_matched += 1
    print('num_matched: ', num_matched)
    print('accuracy: ', num_matched / assignments.size())
"""

sys.exit(main())
