#include <iostream>
#include "./ds/graph/graph.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    graph* g = (graph*)malloc((sizeof(graph)));
    read_graph(g, false);
    return 0;
}
