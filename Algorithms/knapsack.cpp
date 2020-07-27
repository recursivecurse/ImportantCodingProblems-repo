#include<iostream>

using namespace std;

int profit = 0;

int knapsack(int *w,int *p,int sack,int N)
{
	if(N==0 || sack ==0)
	{
		return 0;
	}

	int ans,inc,exc;
	inc = exc =0;

	if(w[N-1] <= sack)
	{
		inc = p[N-1] + knapsack(w,p,sack-w[N-1],N-1);
	}

	exc = knapsack(w,p,sack,N-1);

	ans = max(inc,exc);

	return ans;

}

int main()
{
	int weight[] = {1,2,3,5};
	int price[] = {40,20,30,100};
	cout<<knapsack(weight,price,7,4);

return 0;
}