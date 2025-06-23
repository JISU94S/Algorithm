#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    vector<vector<int>> adj(edge.size()+1);
    for(const vector<int>& e : edge){
        //e[0], e[1]
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }
    
    queue<int> q;
    vector<int> dist(edge.size() + 1, -1);
    
    q.push(1);
    dist[1] = 0;
    
    int max_dist = 0;
    while(!q.empty()){
        int nodeNum = q.front();
        q.pop();
        for(int i = 0; i < adj[nodeNum].size(); i++ )
        {
            int nextNodeNum = adj[nodeNum][i];
            if ( dist[ nextNodeNum ] == -1 )
            {
                dist[nextNodeNum] = dist[nodeNum] + 1;
                q.push(nextNodeNum);
            }
            max_dist = max(max_dist, dist[nextNodeNum]);
        }
    }
    
    for(int i = 0; i < dist.size(); i++){
        if(dist[i] == max_dist){
            answer++;
        }
    }
    
    return answer;
}