//Phone KeyPad Problem

#include<iostream>

using namespace std;

char keyboard[][10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generate_sequences(char *input, char *output,int i, int j)
{
	if(input[i] == '\0')
	{
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}
	int digit = input[i] - '0';

	if(digit == 1 || digit == 0)
	{
		generate_sequences(input,output,i+1,j);
	}
	for(int k=0;keyboard[digit][k] != '\0';k++)
	{
		output[j] = keyboard[digit][k];
		generate_sequences(input,output,i+1,j+1);
	}

	return;

}
int main()
{

	char input[10];
	cin>>input;

	char output[100];
	generate_sequences(input, output,0,0);

return 0;
}