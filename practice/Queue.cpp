#include<bits/stdc++.h>
using namespace std;
const int MAX=10;
class Queue{
    public:
    int front;
    int rear;
    int queue[MAX];
    int count=0;
    Queue(){
        front=-1;
        rear=-1;
    }
    bool isFull(){
        if(rear=MAX-1){
            return true;
        }

    }
    /*
    12 15 18 9 39 1
     ^            ^
     front=0      rear=6
    */
    bool isEmpty(){
        if(rear==-1&& front==-1){
            return true;
        }

    }
    /*
    12 15 18 9 39 1 22  |enqueue(22)|
     ^               ^
     front=0       rear=7
    */
    void enqueue(int x){
        if(!isFull()){
           queue[++rear]=x;
           if(front==-1){
            front=0;
           }
        }
    }
    /*
     -- 15 18 9 39 1 22
        ^            ^    |dequeue()|
     front=1       rear=7
    */
    void dequeue(){
        if(!isEmpty()){
            front++;
        }

    }
    void display(){
        if(!isEmpty()){
        for(int i=front;i<=rear;i++){
            cout<<queue[i];
        }
        }

    }

};
int main(){

}