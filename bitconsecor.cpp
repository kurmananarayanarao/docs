#include <iostream>

using namespace std;

int main() {
  
int n,a[n],b[n],j=0;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"nter the elements in a array";
for(int i=0;i<n;i++)
cin>>a[i];
 while(j<n)
 {
b[j]=a[j]|a[j+1];

j++;

 }
//b[j]=a[j-1]|a[j];
cout<<"play with or with consecutive number is"<<endl;    
   cout<<"{";
   for(int m=0;m<n;m++) 
    cout<<b[m]<<",";
    cout<<"}";
}
