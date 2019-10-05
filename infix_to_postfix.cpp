#include<iostream>
#include<string.h>
#include<stack>
#include<cstdlib>
using namespace std;

int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 

void infixTopost(string s)
{
	stack<char> stk;
	stk.push('N');
	int l=s.length();
	int i;
	string sec;
	for(i=0;i<s.size();i++){
		if((s[i]>='a'&& s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
			sec=sec+s[i];
		else if(s[i]=='(')
			stk.push(s[i]);
		else if(s[i]==')')
		{
			while((stk.top()!='N') && stk.top()!='('){
				sec=sec+stk.top();
				stk.pop();
			}
			if(stk.top()=='(')
				stk.pop();
		}
		else
		{
			while((stk.top()!='N') && (prec(s[i])<=prec(stk.top())))
			{
					sec=sec+stk.top();
					stk.pop();
			}
			stk.push(s[i]);
		}
	}
		while(stk.top()!='N')
		{
			sec=sec+stk.top();
			stk.pop();
		}
cout << sec;

}
int main(int argc, char* argv[]){
	string str=argv[1];
	infixTopost(str);
	return 0;		
}

