#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 ;
    cout<<"Vector capacity: "<<vec1.capacity()<<endl;
    cout<<"Enter 5 Elements: ";
    for(int i =0;i<5;i++){
        int x;
        cin>>x;
        vec1.push_back(x);
    }
    cout<<"Vector size: "<<vec1.size()<<endl;
    cout<<"Vector capacity: "<<vec1.capacity()<<endl;
    cout<<"Vector : ";
    for(int i =0;i<5;i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    cout<<"Front element: "<<vec1.front()<<endl;
    cout<<"Last element: "<<vec1.back()<<endl;

    return 0;
}