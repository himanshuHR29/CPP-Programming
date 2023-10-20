//**************HEIRARICHAL INHERITANCE*****
/*
         animal
      ____|_______
    |            |
    dog          german
    
    

*/


#include <iostream>
using namespace std;

class animal{
    public:
        string name;
        int age;
        void printParent(){
            cout<<"Parent Class animal called"<<endl;
        }
};
class dog:public animal{

};
class germanShepard:public animal{

};
int main(){
    germanShepard obj1;
    dog obj2;
    obj1.printParent();
    obj2.printParent();
    return 0;
}
