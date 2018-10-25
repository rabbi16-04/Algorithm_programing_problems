#include<bits/stdc++.h>
using namespace sd;

int visited[100];
int level[100];
vector<int>ed[100];

bfs(int st)
{
	queue<int>q;
	q.push(st);
	visited[st]=1;
	level[st]=0;

	cout<<"visited nodes: " <<st;

	while(!q.empty())
	{
		int f = q.front();
		q.pop();
		for(int i=0;i<ed[f].size();i++)
		{
			int v = ed[f][i];
			if(visited[v])
			{
				q.push(v);
				level[v] = level[f]+1;
			}
		}
	}
}

int main()
{
	int parent;
	int child;
	int test;

	cin>>test;

	while(test--)
	{
		
