#include <iostream>
using namespace std;
class comple{
    int real,img;
    public:
        comple(int x,int y){
            real=x,img=y;
        }
        void show(){
            cout<<real<<"+i"<<img;
        }
        // void operator ++(){
        //     ++img,++real;
        // }
        comple operator ++(){
            // comple t;
            // t.real= ++real;
            // t.img= ++img;
            // return t;

        }
};
int main(){
    comple c1(3,4);
    comple c2(0,0);
    cout<<endl;
    c2.show();
    c1.show();
}