
    //*************Run time (Dynamic polymorphism)
//      *Function overriding/method overriding is done 
//          (content of same function is changed in child class)



#include <iostream>
using namespace std;

class A{
    public:
        void print(){
            cout<<"Ram ram ji from A"<<endl;
        }
};
class B:public A{
    public:
        void print(){
            cout<<"Hello from B"<<endl;
        }
};
int main(){
   B obj1;
   obj1.print();
    return 0;
}
