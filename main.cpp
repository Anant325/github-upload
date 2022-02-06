#include<iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int l=0,h=0,flag=0;
    string a;
    getline(cin,a);
    h=a.length();
    while(h==l)
{
    if(a[l]!=a[h])
    {
        flag =1;
        cout<<"Not  Palindrome\n";
    }
    l++;
    h--;
}
if(flag==0)
{
    cout<<"Palindrome\n";
}
 
    
    return 0;
}
