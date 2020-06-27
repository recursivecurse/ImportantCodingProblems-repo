#include<bits/stdc++.h>

using namespace std;

//Inversion count :- pairs of elements such that i < j && arr[i] > arr[j]
int Count=0;
int inversionCount(int *arr,int n,int i)
{
	if(i == n) return Count;
	for(int j=i+1;j<n;j++)
	{
		if(arr[i] > arr[j]) Count++;
	}
	return inversionCount(arr,n,i+1);
}

int main()
{
	int arr[5] = {5,4,3,2,1};
	cout<<inversionCount(arr,5,0);

return 0;
}
