cmake_minimum_required(VERSION 3.20)

project(Rooster)

# The math library
add_subdirectory(src/math)

# The stats library
add_subdirectory(src/stats)

#The executable target
add_executable(rooster src/main.cpp)
target_link_libraries(rooster PUBLIC libstats)