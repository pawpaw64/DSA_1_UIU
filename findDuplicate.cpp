#include<stdio.h>
int main(){
    int arr[7]={5,36,20,45,99,66};
    int size=sizeof(arr)/sizeof(arr[0]);
    int check,match;
    for(int i=0;i<size;i++){
        check=arr[i];
        for(int j=i+1;j<size;j++){
            if(check==arr[j])
                match=arr[j];
                break;
        }
    }
    printf("%d",match);
return 0;}
