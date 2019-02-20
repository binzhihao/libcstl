# 使用Cmake Tools插件
# include(CMakeToolsHelpers OPTIANAL)

# 最低版本
cmake_minimum_required(VERSION 2.8)

#include头文件目录
include_directories(..)

aux_source_directory(. DIR_LIB_SRC)

add_library(cstl ${DIR_LIB_SRC})