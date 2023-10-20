//**************MULTI LEVEL INHERITANCE*****
/*
    animal
    |
    dog
    |
    german

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
class germanShepard:public dog{

};
int main(){
    germanShepard obj1;
    obj1.printParent();
    return 0;
}
