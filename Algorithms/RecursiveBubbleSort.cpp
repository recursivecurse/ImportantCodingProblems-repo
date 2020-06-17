#include <iostream>
using namespace std;


void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void Printt(int *arr,int n,int i)
{
    if(i==n) return;
    
    cout<<arr[i]<<" ";
    Printt(arr,n,i+1);
}
void BubbleSort(int *arr,int n, int i)
{
    if(i==(n-1))
        return;
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j+1]<arr[j])
            swap(&arr[j],&arr[j+1]);
    }
    BubbleSort(arr,n,i+1);
}
int main() {
	
	int arr[5] = {5,4,3,2,1};
	BubbleSort(arr,5,0);
	Printt(arr,5,0);
	return 0;
}
