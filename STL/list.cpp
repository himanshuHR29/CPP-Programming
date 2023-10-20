
/*
    ->Element can't be directly accessed as done in deque.
    -> double linked list concept followed of front and end pointer!
*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;
    l.erase(l.begin());
        cout<<l.size()<<endl;
    // list<int>f(4,10); //?
    // for(int i:f){
    //     cout<<i<<" ";
    // }

}