#include<stdio.h>
int main(){
int arr[]={346,3,309,202,3,5,32,5,6,9,9,21,98,239,32948,19843};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);                                        
    printf(" ");
}


return 0;
}
