#include<iostream>

using namespace std;

void ReplacePi(char s[],int i)
{
	if(s[i] == '\0' || s[i+1] == '\0')
		return;

	else if(s[i] == 'p' && s[i+1] == 'i')
	{
		int j = i+2;
		while(s[j] != '\0')
			j++;
		while(j >= i+2)
		{
			s[j+2] = s[j];
			j--;
		}
		s[i] = '3';
		s[i+1] = '.';
		s[i+2] = '1';
		s[i+3] = '4';
		ReplacePi(s,i+4);
	}
	else
	{
		ReplacePi(s,i+1);
	}
	return ;
}

int main()
{
	char s[1000];
	cin>>s;
	ReplacePi(s,0);
	cout<<endl<<s<<endl;

return 0;
}





