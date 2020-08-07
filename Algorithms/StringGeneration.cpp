// Given a string of number generate possibly strings associated with each number

#include<iostream>

using namespace std;

void generate(char *input,char *output, int i, int j)
{
	if(input[i] == '\0')
	{
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}
	int digit = input[i] - '0';
	char character = digit + 'A' -1;
	output[j] = character;
	generate(input,output,i+1,j+1);

	if(input[i+1] != '\0')
	{
		int no = input[i+1] -'0';
		int secno = no*10 + digit;

		if(secno <= 26)
		{
			char seccharacter = secno + 'A' -1;
			output[j] = seccharacter;
			generate(input,output,i+2,j+1);
		}
	}

	
	
	return;
}

int main()
{
	char input[10];
	char output[100];
	cin>>input;
	generate(input,output,0,0);

return 0;
}

	