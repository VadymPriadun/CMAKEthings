cmake_minimum_required(VERSION 3.16)
project(HelloApp VERSION 1.0 LANGUAGES CXX)
add_executable(HelloAppBinary main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)