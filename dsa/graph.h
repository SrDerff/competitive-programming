#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;

template<typename VertexType, typename WeightType>
class Graph{
public:
    class Edge{
    public:
        size_t destination;
        WeightType weight;
        Edge(size_t d, WeightType t) : destination(d), weight(t) {}
    };
private:
    vector<VertexType>vertices;
    vector<vector<Edge>>adjacency;
    bool directed;
public:
    Graph(bool dir=false) : directed(dir){}

    size_t addVertex(const VertexType& value){
        vertices.emplace_back(value);
        adjacency.emplace_back();
        return vertices.size()-1;      
    }

    const VertexType& getVertex(size_t index) const{
        if(index>=vertices.size())
            throw std::out_of_range("Invalid vertex");

        return vertices[index];
    }

    void addEdge(
        size_t from,
        size_t to,
        const WeightType&weight = WeightType{}
    ){
        if(from>=vertices.size() || to>=vertices.size())
            throw std::out_of_range("Invalid vertex");

        adjacency[from].emplace_back(to, weight);

        if(!directed)
            adjacency[to].emplace_back(from, weight);
    }

    const vector<Edge>& neighbors(size_t vertexIndex) const{
        if (vertexIndex>=vertices.size())
            throw std::out_of_range("Invalid vertex");
        
        return adjacency[vertexIndex];
    }

    void print() const{
        for (size_t i = 0; i < vertices.size(); ++i){
            std::cout << vertices[i] << " -> ";

            for (const Edge& edge : adjacency[i]){
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
