#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

template<typename VertexType, typename Weight>
class Graph{
public:
    class Edge{
    public:
        size_t destination;
        Weight weight;
        Edge(size_t d, Weight w) : destination(d), weight(w) {}
    };
private:
    vector<VertexType>vertices;
    vector<vector<Edge>>adjacencyList;
    bool directed;
public:
    Graph(bool dir=false) : directed(dir) {}
    ~Graph(){}

    size_t addVertex(const VertexType& value){
        vertices.emplace_back(value);
        adjacencyList.emplace_back();
        
        return vertices.size()-1;
    }

    void addEdge(size_t from, size_t to, const Weight& weight = Weight{}){
        if(from>=vertices.size() || to>=vertices.size())
            throw std::out_of_range("Invalid vertex");

        adjacencyList[from].emplace_back(to, weight);

        if(!directed)
            adjacencyList[to].emplace_back(from, weight);
    }

    const VertexType& getVertex(size_t vertexIndex) const{
        if(vertexIndex>=vertices.size())
            throw std::out_of_range("Invalid vertex");
        
        return vertices[vertexIndex];
    }

    size_t vertexCount(){
        return vertices.size();
    }

    const vector<Edge>&neighbors(size_t vertexIndex) const{
        if(vertexIndex>=vertices.size())
            throw std::out_of_range("Invalid vertex");

        return adjacencyList[vertexIndex];
    }

    void print() const{
        for (size_t i = 0; i < vertices.size(); ++i){
            std::cout << vertices[i] << " -> ";

            for (const Edge& edge : adjacencyList[i]){
                std::cout
                    << "("
                    << vertices[edge.destination]
                    << ", "
                    << edge.weight
                    << ") ";
            }

            std::cout << '\n';
        }
    }
};