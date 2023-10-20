/*
    -> double ended queue
    -> insertion/deletion can be done from both sides

*/
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    cout<<d.size()<<endl;
    d.push_back(1);
    d.push_front(99);
    for(int i;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    d.pop_front();
    for(int i;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;
        cout<<d.size()<<endl;

}