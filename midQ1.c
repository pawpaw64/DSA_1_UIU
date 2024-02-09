/*Given an array of integers, find the median using selection sort. The first line
of the input will contain the number of elements in the array and the second
line of the input will contain the elements in the array. [5]*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int min_element=i;
        for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min_element])
                    min_element=j;
        }

                if(min_element!=i){
                    int temp=arr[min_element];
                    arr[min_element]=arr[i];
                    arr[i]=temp;

                }
            }

        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

int    mid=arr[n/2];
printf("\n%d",mid);

return 0;}
