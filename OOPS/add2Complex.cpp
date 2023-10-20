//*****************ADDITION OF 2 COMPLEX NUMBER************

#include<iostream>
using namespace std;
class complex{
    float real,img;
    public:
        void getdata(){
           cin>>real>>img;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        complex add(complex c2);
};
complex complex::add(complex c2){
    complex c3;
    c3.real=this->real+c2.real;
    c3.img=this->img+c2.img;
    return c3;
}
int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1.add(c2);
    c3.display();
}