#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> pq;
    /*
        1.push()
        2.pop()
        3.top()
        5.empty()
        6.size()
    */
    pq.push(10);
    pq.push(7);
    pq.push(13);
    pq.push(8);
    pq.push(11);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}
