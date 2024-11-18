#include<bits/stdc++.h>
using namespace std;
struct Node{
    int d;
    Node *next;
};
Node *Front = NULL;
Node *Rear = NULL;
bool isEmpty(){
    if(Front == NULL && Rear==NULL)
        return true;
    else
        return false;
}
void enqueue(int x){
    Node *newNode = new Node;
    newNode->d = x;
    newNode->next = NULL;

    if(Front==NULL){
        Front=Rear=newNode;
        return;
    }
    Rear->next = newNode;
    Rear = newNode;
}
int dequeue(){
    if(isEmpty()){
        cout<<"Underflow"<<endl;
        return -1;
    }
    int x;
    if(Front==Rear){
        x = Front->d;
        Front=Rear=NULL;
    }
    else{
        x = Front->d;
        Front = Front->next;
    }
    return x;
}
int main(){
    enqueue(10);
    enqueue(13);
    enqueue(7);
    enqueue(11);
    cout<<Front->d<<endl;
    cout<<dequeue()<<endl;
    cout<<Front->d<<endl;
}
