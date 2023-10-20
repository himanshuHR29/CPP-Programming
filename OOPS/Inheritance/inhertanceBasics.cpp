/*
//****************************INHERITENCE BASICS***********

    // Child class or sub class created from parent or super class, which can access all attributes of parent child
    
    //protected mode: where data can be accessed in parent class and child class too
    
    
    parent class        Mode               derived class
    
        public          public              public
        public          private             private
        public          protected           protected
        
        private         public              private    
        private         private             private
        private         protected           private
        
        protected         public              protected    
        protected         private             private
        protected         protected           protected


    Types Of inheritance
        1. Single
        2. Multi-level
        3. Multiple
        4. Hybrid
        5. Heirarichal 
*/
#include <iostream>
using namespace std;

//single level inheritance
class haryana{
  public:
    int year=1966;
    int district=22;
    void printParent(){
        cout<<"Parent class called"<<endl;
    }
}; 
class districts: public haryana{
    public:
        string capital;
        void printChild(){
            cout<<"Inherited class called"<<endl;
        }
};
int main(){
    //cout<<"Hello World";
    districts obj1;
    obj1.printChild();
    obj1.printParent();
    return 0;
}
