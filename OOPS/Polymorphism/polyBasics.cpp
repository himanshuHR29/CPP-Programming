//**************POLYMORPHISM*****
// many forms of one thing....

/*
   Two types:
    1. Compile Time (Static polymorphism)
        * Function Overloading
        * Operator Overloading
    2. Run time (Dynamic polymorphism)
*/



//*********operator overloading*****
#include <iostream>
using namespace std;

class A{
    public:
        int a;
        void operator+(A &obj){
            cout<<"You called this operator overloading function"<<endl;
        }
};
int main(){
    A obj1,obj2;
    obj1 + obj2 ;
    return 0;
}
