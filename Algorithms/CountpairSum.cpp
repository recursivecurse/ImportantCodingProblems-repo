#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int m,n;
	    cin>>m>>n;
	    int k;
	    
	    int arr1[m],arr2[n];
	    for(int i=0;i<m;cin>>arr1[i++]);
	    for(int i=0;i<n;cin>>arr2[i++]);
	    cin>>k;
	    int count=0;
	    int i=0;
	    int j=n-1;
	    while(i<=m && j>=0)
	    {
	        if(arr1[i]+arr2[j] == k)
	        {
	            count++;
	            i++;
	        }
	        if(arr1[i]+arr2[j] > k) j--;
	        else i++;
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}
