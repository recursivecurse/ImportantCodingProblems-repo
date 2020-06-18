#include<iostream>

using namespace std;

int StringtoInt(char *s,int n)
{
 	if(n == 0)
	{
		return 0;
	}
	int digit = s[n-1] - '0';
	int ans = StringtoInt(s,n-1);
return ans *10 + digit;
}

int main(int argc, char *args[])
{
	cout<<"The modified int value is \n";
	int i=0;
	while(*(args[1]+i) != '\0')
	{
		i++;
	}
	cout<<i<<endl;
	cout<<StringtoInt(args[1],i)+ 1;

	return 0;
}

	
