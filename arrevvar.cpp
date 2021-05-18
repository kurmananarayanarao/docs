#include<iostream>
#include<bits/stdc++.h>
int n;
using namespace std;
void ArrayReverse(int low,int high,int a[])
{
    if(low>=high)
    {
        return;
    }
     swap(a[low],a[high]);
    return ArrayReverse(l+1,r-1,a);
}
int main()
{
    int n;
    int i=1;
    int a[n];
    cout<<"nter n value"<,endl;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    ArrayReverse(0,n-1,a);
    cout<<"the elements in array reverse useing recursion"<<endl;
	for(auto i:a)
    {
        cout<<i<<" ";
    }
}
