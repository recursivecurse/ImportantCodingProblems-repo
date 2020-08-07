//There is a rate in a maze check whether a path exits if so print all possible paths
//The problem is solved using backtracking

#include<iostream>

using namespace std;


bool ratinmaze(char maze[][10],int sol[][10],int i,int j,int m,int n)
{
	if(i==m && j==n)
	{
		sol[i][j] = 1;
		//Print the maze
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				cout<<sol[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	if(i > m || j > n)
	{
		return false;
	}
	if(maze[i][j] == 'X')
		return false;

	sol[i][j] = 1;

	bool rightCheck = ratinmaze(maze,sol,i,j+1,m,n);
	bool downCheck  = ratinmaze(maze,sol,i+1,j,m,n);

	//Backtrack
	sol[i][j] = 0;

	if(rightCheck || downCheck)
		return true;

	return false;
}

int main()
{

	char maze[10][10] = {"0000",
						 "00X0",
						 "000X",
						 "0X00",
						};
	int sol[10][10] ={0};
	cout<<"Number of possible paths are "<<count<<endl;
	bool s = (ratinmaze(maze,sol,0,0,3,3));

	if(!s)
	{
		cout<<"No path is possible";
		cout<<endl;
	}

return 0;

	

}