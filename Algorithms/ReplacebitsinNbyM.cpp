#include<bits/stdc++.h>

using namespace std;


int Replacebits(int n, int m, int i, int j)
{
	int a = (-1) << (j+1);
	int b = pow(2,i) - 1;
	int c = a | b;
	n = n & c;
	m = m << i;
	n = n | m;

	return n;
}
int main()
{
	cout<<Replacebits(511,5,2,4);

	return 0;

}
	

