cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp ds/graph/graph.cpp ds/graph/graph.h algos/graph/bfs.cpp ds/queue/queue.cpp ds/queue/queue.h ds/item/item.h ds/bool/bool.h)