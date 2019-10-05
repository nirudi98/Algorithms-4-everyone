#include <stdio.h>
#include <stdlib.h>


//the following code is the source code for binary search
//I will be doing the searching process in a separate function
int main()
{
  //initializing an array named arr
  int arr[5]={3,6,10,17,28};

  //element you want to search for
  int key;
  printf("enter the element you want to search for = ");
  scanf("%d",&key);

  //calling the function
  printf("the index of the search key %d is %d ",key,binary(arr,5,key));
}

int binary(int arr[],int size,int key)
{
   //first variable is the 0 index of the array
   //last variable is the last index of the array
   int first=0;
   int last=size-1;

   //since binary search is about dividing the array, finding the middle and comparing the mid value with the
   //search key until they match
   int mid;
   while(first<=last) //we can only search the array until first is smaller than the last
   {
       mid=first+last/2;
       if(arr[mid]==key)
       {
           //if both equal return index
           return mid;
       }
       else if(arr[mid]>key)
       {
            last=mid-1;

       }
       else
       {
           first=mid+1;
       }
   }
   return -1;
   //if key wasn't found
}

