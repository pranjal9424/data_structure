#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
bool AreParanthesesBalanced(string exp);
bool ArePair(char opening,char closing)
{
    if(opening == '(' && closing == ')')
        return true;
    else if(opening == '{' && closing == '}')
        return true;
    else if(opening == '[' && closing == ']')
        return true;
    return false;
}
int main()
{
    string exp;
    cout<<"enter an expression :-";
    cin>>exp;
    if(AreParanthesesBalanced(exp))
    {
        cout<<"balanced";
    }
    else
    {
        cout<<"unbalanced";
    }
    return 0;
}
bool AreParanthesesBalanced(string exp){
     stack<char> s;
     for(int i=0;i<exp.length();i++)
     {
         if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
                s.push(exp[i]);
         else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
         {
			if(s.empty() || !ArePair(s.top(),exp[i])) return false;
             else s.pop();
         }
     }
     return s.empty()?true:false;
}
