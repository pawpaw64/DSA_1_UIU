#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int arrSize);
int main()
{
       int arr[]={9,7,4,5,3,2,1};
           int arrSize = sizeof(arr) / sizeof(arr[0]);
           insertion_sort(arr,arrSize);
          for(int i=0;i<arrSize;i++){
                 cout<<arr[i];
          }


 }
   void insertion_sort(int arr[],int arrSize){

  int temp;
    int key;
    for(int i=1;i<=arrSize-1;i++)
    {
        temp=arr[i];
        key=i;
        while(temp<arr[key-1]&&key>0){
            arr[key]=arr[key-1];
            key=key-1;

        }
        arr[key]=temp;
    }
 }
