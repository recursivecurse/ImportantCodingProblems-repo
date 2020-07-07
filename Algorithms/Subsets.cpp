#include<iostream>

using namespace std;

void Subsets(char *input , char *output, int i, int j)
{
	if(input[i] == '\0')
	{
		output[j] = '\0';
		cout<<output<<" ";
		return;
	}
	output[j] = input[i];
	Subsets(input,output,i+1,j+1);
	Subsets(input,output,i+1,j);
}


int main()
{
	char input[4] = {'a','b','c'};
	char output[10];
	Subsets(input,output,0,0);

return 0;
}

