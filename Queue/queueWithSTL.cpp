#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> Q;
    /*
        1.push()
        2.pop()
        3.front()
        4.back()
        5.empty()
        6.size()
    */
    Q.push(10);
    Q.push(7);
    Q.push(13);
    Q.push(8);
    Q.push(11);
    cout<<Q.front()<<endl;
    Q.pop();
    cout<<Q.front()<<endl;
    cout<<Q.back()<<endl;
    cout<<"-----content----"<<endl;
    while(!Q.empty()){
        cout<<Q.front()<<" ";
        Q.pop();
    }

    return 0;
}
