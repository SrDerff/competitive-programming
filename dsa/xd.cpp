#include "graph.h"
#include <iostream>
using namespace std;
int main(){
    Graph<string,double> graph;
    auto lima = graph.addVertex("Lima");
    auto cusco = graph.addVertex("Cusco");
    auto aqp = graph.addVertex("Arequipa");
    auto trux = graph.addVertex("Trujillo");

    graph.addEdge(lima, cusco, 1100.5);
    graph.addEdge(cusco, aqp, 510.2);
    graph.addEdge(lima, trux, 1008.8);

    graph.print();
    return 0;
}