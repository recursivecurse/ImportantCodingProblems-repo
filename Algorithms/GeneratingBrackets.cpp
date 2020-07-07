//Given the value of N which is the pairs of brackets. Your task is to print all the possible ways of balanced brackets string
#include<iostream>

using namespace std;

void BalancedBrackets(char *output ,int i, int j,int k, int n,int p)
{
	if(n <= 0)
	{
		output[k] = '\0';
		cout<<output<<endl;
		return;
	}
	if(i < p) {
		output[k] = '(';
		BalancedBrackets(output,i+1,j,k+1,n-1,p);
	}
	if(j < i )  
        {
                output[k] = ')';
                BalancedBrackets(output,i,j+1,k+1,n-1,p);
        }

	

}

int main()
{
	char output[10];
	//cout<<"1"<<output<<"1";
	BalancedBrackets(output,0,0,0,8,4);

return 0;
}
	
	



