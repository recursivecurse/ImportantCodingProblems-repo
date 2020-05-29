//Given an array with N numbers find out the majority element
//A majority element is the element which appears in the array more than floor(N/2) times


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;cin>>arr[i++]);
		int count=1;
		int majority = arr[0];
		for(int i=1;i<n;i++)
		{
			if(majority == arr[i])
			{
				count++;
			}
			else{
				count--;
				if(count==0)
				{
					majority=arr[i];
					count =1;
				}
			}
		}
		int counter =0;
		for(int i=0;i<n;i++)
		{
			if(majority==arr[i])
			{
				counter++;
			}
		}
		if(counter > floor(n/2)) cout<<majority<<endl;

		else cout<<"No Majority element found"<<endl;
	}
	
	return 0;
}

