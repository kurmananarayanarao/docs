#include <iostream>

using namespace std;

int main() {
    int n,x[10],y[10],c=0,i,j,k=0,size;
    cout<<"nter the decimal  value"<<endl;
    cin>>n;
    cout<<"the binary number is"; 
    
    i=0;
    while(n!=0)
    {
     x[i]=n%2;
    // cout<<n%2;
    if(x[i]==1)    
      {c++; 
      }
     n=n/2;
     i++;
     size=i;
    }


 for(j=size-1;j>=0;j--)
{ y[k]=x[j];
   k++;
}
for(int m=0;m<=k-1;m++)
cout<<y[m];
 cout<<"\nthe set number is" <<c;
    
}
