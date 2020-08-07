//Given a string print all the permutation of it 
//The problem can be solved by backtracking

#include<iostream>

using namespace std;

void swap(int *xp,int *yp)
{
	int t = *xp;
	*xp  =  *yp;
	*yp  =  t;
}
void generate_permutations(char *input,int i)
{
	//Base case
	if(input[i] == '\0')
	{
		
		cout<<input<<" , ";
		return;
	}
	//Recursive case
	for(int j=i;input[j]!='\0';j++)
	{
		swap(input[i],input[j]);
		generate_permutations(input,i+1);
		//Backtracking (to restore the previous array)
		swap(input[i],input[j]);
	}

	return;

}


int main()
{
	char input[10];
	cin>>input;
	generate_permutations(input,0);
	cout<<endl;

return 0;


}