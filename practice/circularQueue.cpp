#include<bits/stdc++.h>
using namespace std;
const int MAX=10;
class circularQueue{
    int front;
    int rear;
    int queue[MAX];
    circularQueue(){
        front=-1;
        rear=-1;
    }
    /*
    in circular queue: queue can be full in 2 ways 
    1. linear way >> front=0 and rear=max-1;
    2.circular way>>(rear+1) % size == front)
    */
    void cEn(int x){
        if((front==0 && rear==MAX-1)||((rear+1) % MAX == front)){
            cout<<"full";
            
        }
         else if (front == -1) /* Insert First Element */
    {
        front = rear = 0;
        queue[rear] = x;
    }
 
    else if (rear == MAX-1 && front != 0)
    {
        rear = 0; 
         queue[rear] = x;
    }
 
    else
    {
        rear++;
        queue[rear] = x;
    }

    }
    void cDe(){
        
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return ;
    }
 
    int data = queue[front];
    queue[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX-1)
        front = 0;
    else
        front++;
 
        
    }
    void display(){


    }
};
int main(){
    
}