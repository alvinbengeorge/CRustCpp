// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 7 Graph
// Program 1 Create an adjacency matrix representation for the graph 

#include<iostream>
using namespace std;

class Graph {
    private:
    bool **adjMatrix;
    int numVertices;

    public:
    Graph(int numVertices) {
        this->numVertices = numVertices;
        adjMatrix = new bool*[numVertices];
        for (int i = 0; i < numVertices; i++) {
            adjMatrix[i] = new bool[numVertices];
            for (int j = 0; j < numVertices; j++)
                adjMatrix[i][j] = false;
        }
    }

    void addEdge(int i, int j) {
        adjMatrix[i][j] = true;
        adjMatrix[j][i] = true;
    }

    void removeEdge(int i, int j) {
        adjMatrix[i][j] = false;
        adjMatrix[j][i] = false;
    }

    bool isEdge(int i, int j) {
        return adjMatrix[i][j];
    }

    void printGraph() {
        for (int i=0; i<this->numVertices; i++) {
            cout << i << ":";
            for (int j=0; j<this->numVertices; j++) {
                cout << this->adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Graph() {
        for (int i = 0; i < numVertices; i++)
            delete[] adjMatrix[i];
        delete[] adjMatrix;
    }
};

int main() {
    Graph g(6);
    g.addEdge(1, 3);
    g.addEdge(1, 2);
    g.addEdge(1, 5);
    g.addEdge(3, 4);
    g.addEdge(3, 2);
    g.addEdge(2, 5);
    g.printGraph();
}