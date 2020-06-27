#include<bits/stdc++.h>

using namespace std;

int CountWays(int n)
{
	if (n==1 || n==2) return n;
	if(n==3) return 4;
	
	return CountWays(n-1) + CountWays(n-2) + CountWays(n-3);
}

int main()
{
	cout<<"Enter the value of n"<<endl;
	int n;
	cin>>n;
	cout<<CountWays(n);
return 0;
}

