#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
void Reverse(char *c,int n);
int main(){
    char c[51];
    cout<<"enter string";
    cin>>c;
    Reverse(c,strlen(c));
    cout<<c;
}
void Reverse(char *c,int n){
   stack<char> s;
   for(int i=0;i<n;i++){
    s.push(c[i]);
   }

   for(int i=0;i<n;i++){
    c[i]=s.top();
    s.pop();
   }
}
