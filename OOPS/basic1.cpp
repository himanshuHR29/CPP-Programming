//*********************BASIC CLASS PROGRAM***************
#include <iostream>
using namespace std;

class firstClass{
    private:
        int x;
    public:
        void takeInp(){
            cin>>x;
        }
        void print(){
            cout<<x<<endl;
        }
};

int main(){
    
    //static allocation
    firstClass obj1;
    obj1.takeInp();
    obj1.print();
    
    
    //dynamic allocation (memory allocation in heap)
    firstClass *obj2=new firstClass;
    (*obj2).takeInp();
    (*obj2).print();
    // or
    obj2->takeInp();
    obj2->print();
    

    return 0;
}
