#include <iostream>
#include<queue>
#include <map>
#include <vector>
using namespace std;

void dfs(map<int,vector<int> > graph,int node,map<int,bool> &visits){
    if(visits[node] == false){
        cout<<node<< " ";
        visits[node] = true;
        for(int i:graph[node]){
            dfs(graph,i,visits);
        }
    }else{
        return;
    }
}

int main(){
    map<int,bool> visits;
    map<int,vector<int> > graph;
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[0].push_back(3);
    graph[1].push_back(0);
    graph[1].push_back(4);
    graph[1].push_back(5);
    graph[2].push_back(0);
    graph[2].push_back(5);
    graph[3].push_back(0);
    graph[3].push_back(4);
    graph[4].push_back(1);
    graph[4].push_back(3);
    graph[5].push_back(1);
    graph[5].push_back(2);
    // dfs(graph,0,visits);
    dfs(graph,1,visits);
    cout<<endl;
    return 0;
}
