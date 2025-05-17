#include<bits/stdc++.h>
using namespace std;

int graph[10][10];

void add_edge(int s, int d){
    graph[s][d] = 1;
    graph[d][s] = 1;
}

int main(){
    int vertex, edge;
    cin >> vertex >> edge;
    int s, d;
    for(int i=0; i<edge; i++){
        cin >> s >> d;
        add_edge(s, d);
    }
    // output of the list
    for(int i=0; i<vertex; i++){
        printf("%d -> ", i);
        for(int j=0; j< vertex; j++){
            if(graph[i][j]==1)
                cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
