#include<iostream>
using namespace std;
template<typename x>
class arrayList{
    private:
        struct controlBlock{
            x capacity;
            x *arrPointer;
        };controlBlock *s;
    public:
        arrayList(x
         capacity){
            s=new controlBlock;
            s->capacity=capacity;
            s->arrPointer=new x[s->capacity];
        }
        void addElement(x index,x data){
            if(index>=0 && index<s->capacity){
                s->arrPointer[index]=data;
            }
            else{
                cout<<"Invalid Array Index"<<endl;
            }
        }
        void viewList(){
            x i;
            for(i=0;i<s->capacity;i++){
                cout<<s->arrPointer[i]<<" ";
            }
        }
        void viewElement(x index,x *data){
            if(index>=0 && index<s->capacity){
                *data=s->arrPointer[index];
            }
            else{
                cout<<"Invalid index"<<endl;
            }
        }
};

int main(){
    int data;
    arrayList<int> list1(5);
    arrayList<char> list2(5);
    // list1.addElement(0,300);
    // list1.addElement(1,301);
    // list1.addElement(2,302);
    // list1.addElement(3,303);
    // list1.addElement(4,304);
    //list1.addElement(5,305);
    //list1.viewList();
    list2.addElement(0,'a');
    list2.addElement(1,'b');
    list2.addElement(2,'c');
    list2.addElement(3,'d');
    list2.addElement(4,'e');
    //list2.viewElement(7,&data);
    list2.viewList();
    return 0;
}