/*
This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at http://mozilla.org/MPL/2.0/.

Copyright (c) 2019 Panda Team
*/

DEFINE_CAST_FEATURE_FILTER(int64_t,int64_t,true);
DEFINE_CAST_FEATURE_FILTER(int64_t,int64_t,false);
DEFINE_CAST_FEATURE_FILTER(int64_t,int32_t,true);
DEFINE_CAST_FEATURE_FILTER(int64_t,int32_t,false);
DEFINE_CAST_FEATURE_FILTER(int64_t,bool,true);
DEFINE_CAST_FEATURE_FILTER(int64_t,bool,false);
DEFINE_CAST_FEATURE_FILTER(int64_t,double,true);
DEFINE_CAST_FEATURE_FILTER(int64_t,double,false);
DEFINE_CAST_FEATURE_FILTER(int64_t,uint64_t,true);
DEFINE_CAST_FEATURE_FILTER(int64_t,uint64_t,false);
///-----------------------------------------------//
DEFINE_CAST_FEATURE_FILTER(int32_t,int64_t,true);
DEFINE_CAST_FEATURE_FILTER(int32_t,int64_t,false);
DEFINE_CAST_FEATURE_FILTER(int32_t,int32_t,true);
DEFINE_CAST_FEATURE_FILTER(int32_t,int32_t,false);
DEFINE_CAST_FEATURE_FILTER(int32_t,bool,true);
DEFINE_CAST_FEATURE_FILTER(int32_t,bool,false);
DEFINE_CAST_FEATURE_FILTER(int32_t,double,true);
DEFINE_CAST_FEATURE_FILTER(int32_t,double,false);
DEFINE_CAST_FEATURE_FILTER(int32_t,uint64_t,true);
DEFINE_CAST_FEATURE_FILTER(int32_t,uint64_t,false);
///-----------------------------------------------//
DEFINE_CAST_FEATURE_FILTER(bool,int64_t,true);
DEFINE_CAST_FEATURE_FILTER(bool,int64_t,false);
DEFINE_CAST_FEATURE_FILTER(bool,int32_t,true);
DEFINE_CAST_FEATURE_FILTER(bool,int32_t,false);
DEFINE_CAST_FEATURE_FILTER(bool,bool,true);
DEFINE_CAST_FEATURE_FILTER(bool,bool,false);
DEFINE_CAST_FEATURE_FILTER(bool,double,true);
DEFINE_CAST_FEATURE_FILTER(bool,double,false);
DEFINE_CAST_FEATURE_FILTER(bool,uint64_t,true);
DEFINE_CAST_FEATURE_FILTER(bool,uint64_t,false);
///-----------------------------------------------//
DEFINE_CAST_FEATURE_FILTER(double,int64_t,true);
DEFINE_CAST_FEATURE_FILTER(double,int64_t,false);
DEFINE_CAST_FEATURE_FILTER(double,int32_t,true);
DEFINE_CAST_FEATURE_FILTER(double,int32_t,false);
DEFINE_CAST_FEATURE_FILTER(double,bool,true);
DEFINE_CAST_FEATURE_FILTER(double,bool,false);
DEFINE_CAST_FEATURE_FILTER(double,double,true);
DEFINE_CAST_FEATURE_FILTER(double,double,false);
DEFINE_CAST_FEATURE_FILTER(double,uint64_t,true);
DEFINE_CAST_FEATURE_FILTER(double,uint64_t,false);
///-----------------------------------------------//
DEFINE_CAST_FEATURE_FILTER(std::string,int64_t,true);
DEFINE_CAST_FEATURE_FILTER(std::string,int64_t,false);
DEFINE_CAST_FEATURE_FILTER(std::string,int32_t,true);
DEFINE_CAST_FEATURE_FILTER(std::string,int32_t,false);
DEFINE_CAST_FEATURE_FILTER(std::string,bool,true);
DEFINE_CAST_FEATURE_FILTER(std::string,bool,false);
DEFINE_CAST_FEATURE_FILTER(std::string,double,true);
DEFINE_CAST_FEATURE_FILTER(std::string,double,false);
DEFINE_CAST_FEATURE_FILTER(std::string,uint64_t,true);
DEFINE_CAST_FEATURE_FILTER(std::string,uint64_t,false);
///-----------------------------------------------//
DEFINE_CAST_FEATURE_FILTER(uint64_t,int64_t,true);
DEFINE_CAST_FEATURE_FILTER(uint64_t,int64_t,false);
DEFINE_CAST_FEATURE_FILTER(uint64_t,int32_t,true);
DEFINE_CAST_FEATURE_FILTER(uint64_t,int32_t,false);
DEFINE_CAST_FEATURE_FILTER(uint64_t,bool,true);
DEFINE_CAST_FEATURE_FILTER(uint64_t,bool,false);
DEFINE_CAST_FEATURE_FILTER(uint64_t,double,true);
DEFINE_CAST_FEATURE_FILTER(uint64_t,double,false);
DEFINE_CAST_FEATURE_FILTER(uint64_t,uint64_t,true);
DEFINE_CAST_FEATURE_FILTER(uint64_t,uint64_t,false);
///-----------------------------------------------//
