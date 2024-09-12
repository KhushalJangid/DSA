#include <iostream>
#include<queue>
#include <map>
#include <vector>
using namespace std;

void bfs(map<int,vector<int> > graph,int node){
    queue<int> q;
    map<int,bool> visits;
    q.push(node);
    visits[node] = true;
    while(!q.empty()){
        int temp = q.front();
        cout<<temp<<" ";
        for(int i:graph[temp]){
            if(!visits[i]){
                visits[i] = true;
                q.push(i);
            }
        }
        q.pop();
    }
}
void bfs_r(map<int,vector<int> > graph,map<int,bool> &visits,queue<int> q){
    if(!q.empty()){
        int temp = q.front();
        cout<<temp<<" ";
        visits[temp] = true;
        for(int i:graph[temp]){
            if(!visits[i]){
                visits[i] = true;
                q.push(i);
            }
        }
        q.pop();
        bfs_r(graph, visits,q);
    }
}

int main(){
    map<int,vector<int> > graph;
    queue<int> q;
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
    bfs(graph,0);
    // map<int,bool> visits;
    // bfs_r(graph,visits,q);
    cout<<endl;
    return 0;
}
