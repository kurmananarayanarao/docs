#include<iostream>
#include<bits/stdc++.h>
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

int n;
using namespace std;


//check the given string is palindrome or not
bool CheckPalindrome(int i,int n,string s)
{
    if(i>=n/2)
    {
        return true;
    }
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return CheckPalindrome(i+1,n,s);
}
int main()
{
   
    string str;
	cout<<"nter a string"<<endl;
    getline(cin, str);
    int n=str.length();
    if(CheckPalindrome(0,n,str)==0)
    {
        cout<<"not palin"<<endl;
    }
    else
    {
        cout<<" palin"<<endl;
    }
return 0;
    
}


