#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Himanshu");
    q.push("Vaishnav");
    q.push("Ballabgarh");
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    return 0;
}