#include<iostream>
using namespace std;
int main() 
{

int n,a[10],subasize,maxxorsub;
cout<<"nter the size of array"<<endl;
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
  if(n%2==0)
    {subasize=n/2-1;
      cout<<"the max subarray size"<<subasize<<endl;
      cout<<"the maximum subarray xor is"<<endl;
     maxxorsub=a[n-1]|a[n-2];
    cout<<"the max subarray xor value is"<<maxxorsub;
    }
    else
    {
        subasize=(n-1)/2 - 1;
        cout<<"the max subarray size"<<subasize<<endl;
        cout<<"the maximum subarray xor is"<<endl;
        maxxorsub=a[n-2]|a[n-3];
      cout<<"the max subarray xor value is"<<maxxorsub;
    }

    return 0;    
}
