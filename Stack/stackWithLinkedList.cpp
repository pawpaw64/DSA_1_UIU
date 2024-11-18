#include<bits/stdc++.h>
using namespace std;

struct Student{
    int ID;
    string name;
    float cgpa;
};

struct Node{
    Student s;
    Node *next;
};

Node *top = NULL;

bool isEmpty(){
    if(top==NULL)
        return true;
    else
        return false;
}

void push(Student s1){
    Node *newNode = new Node;
    newNode->s = s1;
    newNode->next = NULL;

    if(top==NULL){
        top = newNode;
        return;
    }
    newNode->next = top;
    top = newNode;
}

Student pop(){
    if(isEmpty()){
        cout<<"Underflow"<<endl;
    }
    else{
        Node *tmp = top;
    top = top->next;

    Student s1 = tmp->s;
    delete tmp;
    return s1;
    }

}

Student peek(){
    return top->s;
}
void printStack(){
    Node *ptr = top;
    while(ptr){
        cout<<ptr->s.ID<<" "<<ptr->s.name<<" "<<ptr->s.cgpa<<endl;
        ptr = ptr->next;
    }
}
int main(){

    push({1,"Rahad",3.95});
    push({2,"Mohai",3.97});
    push({3,"Partho",4});
    push({4,"Netu",3.5});

    printStack();
    cout<<pop().name<<endl;
    printStack();
    return 0;
}
