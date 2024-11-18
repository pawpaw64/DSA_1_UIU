#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> stck;
    string brackets;
    cin>>brackets;

    for(char c:brackets){
        if(c == '(' || c == '{' || c == '['){
            stck.push_back(c);// push to stack
        }
        else{
            char t = stck.back();//returns top
            if(c == ')' && t == '('){
                stck.pop_back();
            }
            else if(c == '}' && t== '{')
            {
                stck.pop_back();
            }
            else if(c == ']' && t=='['){
                stck.pop_back();
            }
            else{
                cout<<"Invalid Sequence"<<endl;
                return 0;
            }
        }
    }
    if(stck.empty()){
        cout<<"Valid Sequence"<<endl;
    }
}
