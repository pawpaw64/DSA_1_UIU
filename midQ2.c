/*You have been given a sorted array of integers, write a program to find the
indices of the two integers that multiply up to a given target.*/

#include<stdio.h>
void check();
main()
{
    int arr[]={2,5,7,10,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=14;
    check(arr,size,target);

return 0;
}
void check(int arr[],int size,int target){
    int lb,ub,sum;
      lb=0;
        ub=size-1;
    while(lb<ub){

        sum=arr[lb]*arr[ub];
        if(sum==target){
            printf("indices=%d*%d=target %d",lb,ub,target);
            return;
        }
        else if(sum<target){
            lb++;

        }
        else
            ub--;

    }
}
