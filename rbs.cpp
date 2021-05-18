#include <iostream.h>
#include <stdlib.h>

void BinarySearch(int arr[],int num,int first,int last){

   int mid;

   if(first > last){

	cout<<"Number is not found"<<endl;

   } else {

      /* Calculate mid element */
      mid = (first + last)/2;

      /* If mid is equal to number we are searching */

      if(arr[mid]==num){

	    cout<<"Element is found at index "<<mid<<endl;
	    exit(0);

	}else if(arr[mid] > num){

	    BinarySearch(arr, num, first, mid-1);

	}else{

	    BinarySearch(arr, num, mid+1, last);
	}
    }
}


int main(){

   int arr[100],beg,mid,end,i,n,num;

  cout<<"Enter the size of an array "<<endl;
   cin>>n;

   cout<<"Enter the values in sorted sequence "<<endl;

   for(i=0;i<n;i++)
   {
       cin>>arr[i]);
   }


   beg=0;
   end=n-1;

   cout<<"Enter a value to be search: "<<endl;
   cin>>num;

   BinarySearch(arr,num,beg,end);

}
