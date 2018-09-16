#使用Cmake Tools插件
#include(CMakeToolsHelpers OPTIANAL)

cmake_minimum_required(VERSION 2.8)

#项目名称
project(CstlTest)

#include头文件目录
include_directories(..)

#链接库目录
link_directories("./lib")

#源文件目录
aux_source_directory(. DIR_SRC)

#lib子目录
# add_subdirectory(./src)

#指定生成目标
add_executable(CstlTest test_main.c ${DIR_SRC})

#添加链接库
target_link_libraries(CstlTest cstl)