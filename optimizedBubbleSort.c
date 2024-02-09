#include<stdio.h>
int main(){
    int arr[]={4,6,2,69,33};
    int n=sizeof(arr)/sizeof(arr[0]);
   int count = 0;
    int loop = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }
        loop++;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}