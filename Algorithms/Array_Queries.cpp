#include<iostream>

using namespace std;

int array[10000000]={0};
int copya[10000000]={0};

void prefixSum()
{
	int sum=0;
	for(int i=0;i<10000000;i++)
	{
		sum+=copya[i];
		array[i] = sum;
	}

}

void printArray(int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
}

int main()
{
	int queries;
	cin>>queries;

	while(queries--)
	{
		int a,b;
		cin>>a>>b;
		copya[a] = copya[a]+1;
		copya[b+1] = copya[b+1]-1;
	}

	prefixSum();
	printArray(20);

	return 0;
}


