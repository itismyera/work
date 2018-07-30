cmake_minimum_required(VERSION 3.12)
project(work)

message("--------------- Options ---------------------")
message(" CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
message(" CMAKE_BUILD_TYPE: Hello World!")

#头文件
include_directories(${PROJECT_SOURCE_DIR}/src/include)

#源文件
aux_source_directory(${PROJECT_SOURCE_DIR}/src/main dir_srcs)

#库文件
link_directories(${CMAKE_CURRENT_LIST_DIR}/lib)

#编译器相关设置
set(CMAKE_CXX_COMPILER   "clang++")   #显示指定使用的C++编译器
set(CMAKE_CXX_FLAGS  "-std=c++11")    #c++11
set(CMAKE_CXX_FLAGS  "-g")            #调试信息
set(CMAKE_CXX_FLAGS  "-Wall")         #开启所有警告

set(WORK ${dir_srcs})

add_executable(work ${WORK})