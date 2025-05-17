#include<bits/stdc++.h>
using namespace std;
/// adjacency matrix

int graph[10][10];

void add_edge(int s, int d){
    graph[s][d] = 1;
    graph[d][s] = 1;
}


int main(){
//    mapset(graph, 0, sizeof(graph));
    int vertex, edge;
    cin >> vertex >> edge;
    int s, d;
    for(int i=1; i<=edge; i++){
        cin >> s >> d;
        add_edge(s, d);
    }

    /// output of the graph as Adjacency Matrix
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;

}

/*
sample input :
5 5
0 1
0 2
1 3
1 4
2 3
*/

