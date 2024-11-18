#include<bits/stdc++.h>
using namespace std;
const int Max=5;
class Mystack{
    public:
    int top;
    int stk[Max];


    void createStack(){
        top=-1;
    }
    bool isEmpty(){
        if (top==-1){
            cout<<"Empty";
            return true;
        }
        else return false;
    }
    bool isFull(){
        if(top==Max-1){
            cout<<"Full";
        return true;}
        else return false;
    }
    void push(int x){
        if(isFull()){
            cout<<"stack full";
        }
        else{
            top++;
            stk[top]=x;
        }
    }
    int pop(){
        if(isEmpty()){
            cout<<"stack empty";
        }
        else {
        int x=stk[top];
        top--;
        return x;
        }
    }
    int peek(){
        return top;
    }


};

int main(){
    Mystack newStack;
    newStack.createStack();
    newStack.push(5);
    newStack.push(4);
    newStack.push(2);
    cout<<newStack.pop();

    
    newStack.isEmpty();

}