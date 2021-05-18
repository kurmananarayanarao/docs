#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int k,i,p,m,n,x[50],y[50],l,c=0,dec,cons;
    cout<<"nter n values"<<endl;
    cin>>n;
    cout<<"nter the kth bit of  a number"<<endl;
    cin>>k;
    i=0;
while(n!=0)
    {
    x[i]=n%2;
    n=n/2;
    i++;
    }
    m=0;
    for(int j=i-1;j>=0;j--)
    {
        y[m]=x[j];
        m++;
        c++;
    }
    cout<<"m value"<<m;
    cout<<"the binary number"<<endl;
    for( p=0;p<m;p++)
    {
      
   if(p==k-1)
    y[p]=1;
    cout<<y[p];
  }
    cout<<"the number of digits"<<c;
    cons=c-1;
    dec=0;
    while(c>=0)
    {
        
        dec=dec+  y[c] * ( pow(2,cons) );
        cout<<"\n"<<dec<<endl;
        c--;
        cons--;
        
    }

    cout<<"\nthe equlenet binary number after changeing "<<k<<"bit is"<<k<<dec<<endl;

    
}
