#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> visited;
vector<int> dfsvisited;
bool isCycle(int src)
{
	visited[src] = 1;
	dfsvisited[src] = 1;  //this is for tracking the path we go each time
	for(auto i:adj[src]) //traverse the graph
	{
		if(!visited[i]) // if not visited
		{
			if(isCycle(i))return true; // if not visited we recurse again 
		}
		else if(dfsvisited[i])return true; // we also tracked the path through which we came and if the node is already in our path it means we found a cycle
	}
	dfsvisited[src] = 0; // finally after traversing we have to make 0 since we need to track path each time
	return false; // if cycle not found
}
int main()
{
	int v,e,x,y;
	cin>>v>>e;
	visited.resize(v,0);
	adj.resize(v);
	dfsvisited.resize(v,0);
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		cout<<x<<y;
		adj[x].push_back(y);
	}
	for(int i=0;i<v;i++)
	{
		if(!visited[i]) // for every unvisited node
		{
			if(isCycle(i))cout<<"Cycle"; // if cycle is found
		}
	}
}
