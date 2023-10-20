#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
        complex(int r,int i){
            real=r;
            img=i;
        }
        complex add(complex c){
            complex temp(0,0);
            temp.real=this->real+c.real;
            temp.img=this->img+c.img;
            return temp;
        }
        void print(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};
int main(){
    complex c1(2,1);
    complex c2(9,4);
    complex c3(0,0);
    c3=c1.add(c2);
    c3.print();
    return 0;
}