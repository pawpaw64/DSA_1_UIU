#include<bits/stdc++.h>
using namespace std;
#define SIZE 5

int Q[SIZE],f=-1,r=-1;

bool isEmpty(){
    if(f==-1 && r==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(r+1==SIZE)
        return true;
    else
        return false;
}
void enqueue(int x){
    if(isFull()){
        cout<<"Overflow"<<endl;
        return;
    }
    if(isEmpty()){
        f = r = 0;
    }
    else{
        r = r+1;
    }
    Q[r] = x;
}
int dequeue(){
    if(isEmpty()){
        cout<<"Underflow"<<endl;
        return -1;
    }
    int x = Q[f];
    if(f==r){
        f = r = -1;
    }
    else{
        f = f + 1;
    }
    return x;

}
int top(){
    return Q[f];
}
void print(){
    if(!isEmpty()){
        cout<<"Current Queue"<<endl;
        for(int i=f;i<=r;i++){
            cout<<Q[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    dequeue();
    enqueue(10);
    enqueue(13);
    enqueue(7);
    cout<<dequeue()<<endl;
    enqueue(5);
    enqueue(2);
    enqueue(8);
    enqueue(12);
    cout<<top()<<endl;
    enqueue(15);
    print();
    return 0;
}
