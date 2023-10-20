//************MULTIPLE INHERITANCE


/*
    animal      Human
    |____        ___|
             |
           Hybrid

*/


#include <iostream>
using namespace std;
class animal{
    public:
        string name;
        int age;
        void printParent(){
            cout<<"Class animal called"<<endl;
        }
};
class human{
    public:
        void printhuman(){
            cout<<"Human class called"<<endl;
        }
};
class hybrid:public animal,public human{
    
};
int main(){
    hybrid obj1;
    obj1.printParent();
    obj1.printhuman();
    return 0;
}
