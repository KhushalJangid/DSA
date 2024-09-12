#include <climits>
#include <iostream>
#include<queue>
#include <map>
#include <regex>
#include <vector>
using namespace std;

int find_min(map<int,bool> spt,map<int,int> dist,int n){
    int min_node = INT_MAX;
    // for(auto i:dist){
    //     if(i.second!=0&&i.second<d &&!spt[i.second]){
    //         min_node=i.second;
    //     }
    // }
    for(int i=1;i<n-1;i++){
        if(!spt[i] && dist[i]<min_node){
            min_node = dist[i];
        }
    }
    return min_node;
}

void djikstra(map<int ,map<int,int> > graph,int node,int n){
    map<int,bool> spt;
    map<int,int> dist;
    map<int,int> neighbors = graph[node];
    for(int i=0;i<n-1;i++){
        int u = find_min(spt, dist);
    }
}


int main(){
    map<int ,map<int,int> > graph;
    graph[0][1] = 4;
    graph[0][7] = 8;

    graph[1][0] = 4;
    graph[1][2] = 8;
    graph[1][7] = 11;

    graph[7][8] = 7;
    graph[7][6] = 1;
    graph[7][0] = 8;
    graph[7][1] = 11;

    graph[6][7] = 1;
    graph[6][8] = 6;
    graph[6][5] = 2;

    graph[8][7] = 7;
    graph[8][6] = 6;
    graph[8][2] = 2;

    graph[2][8] = 2;
    graph[2][5] = 4;
    graph[2][3] = 7;
    graph[2][1] = 8;

    graph[3][2] = 7;
    graph[3][5] = 14;
    graph[3][4] = 9;

    graph[5][6] = 2;
    graph[5][2] = 4;
    graph[5][3] = 14;
    graph[5][4] = 10;

    graph[4][5] = 10;
    graph[4][3] = 9;
    return 0;
}
