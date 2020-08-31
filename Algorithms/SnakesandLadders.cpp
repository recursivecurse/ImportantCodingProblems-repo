//Find the minimum number of dices rolled to win the game

#include<iostream>
#include<map>
#include<queue>
#include<climits>
#include<list>

using namespace std;
template<typename T>
class Graph{

	
		map<T,list<T> > l;

	public:

		void addEdge(T x, T y)
		{
			l[x].push_back(y);
			//l[y].push_back(x);																
		}

		int shortDist(T src,T des)
		{
			queue<T> q;     				//Queue for level order traversal
			map<T,int> distance;			//visited array
			map<T,T>  parent;

			
			for(auto itr: l)
			{
				T node = itr.first;
				distance[node] = INT_MAX;
			}
			distance[src] = 0;
			q.push(src);
			parent[src] = src;
			

			while(!q.empty())
			{
				T node = q.front();
				//cout<<node<<" ";
				q.pop();
				for(auto itr: l[node])
				{
					if(distance[itr] == INT_MAX)
					{
						q.push(itr);
						distance[itr] = distance[node]+1;
						parent[itr] = node;
					}
					
				}
			}

			T temp = des;
			while(temp!=src)
			{
				cout<<temp<<" ";
				temp = parent[temp];
			}
			cout<<src<<endl;
			return distance[des];
		}
};

int main()
{
	Graph<int> graph;

	int board[50] = {0};

	//Precomputed jump - +ve or -ve
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = 10;
	board[32] = -2;
	board[34] = -22;

	for(int i=0;i<=36;i++)
	{
		for(int dice=1;dice<=6;dice++)
		{
			int j = i+dice;
			j+= board[j];

			if(j<=36)
			{
				graph.addEdge(i,j);
			}
		}
	}
	graph.addEdge(36,36);
	cout<<endl;
	cout<<graph.shortDist(0,36);
	cout<<endl;

return 0;
}
