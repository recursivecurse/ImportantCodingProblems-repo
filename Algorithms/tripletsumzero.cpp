//Given N numbers in an array find out all the triplets with sum zero.
//Time Complexity O(N)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		bool b = false;
		for(int i=0;i<n;cin>>arr[i++]);
		unordered_set<int> s;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int x = -(arr[i] + arr[j]);
				if(s.find(x) != s.end())
				{
					b= true;
					cout<<arr[i]<<" "<<arr[j]<<" "<<x<<endl;
				}
				else{
					s.insert(arr[j]);
				}
			}
		}
		if(!b) cout<<"Triplet not found"<<endl;
	}

		return 0;
}

