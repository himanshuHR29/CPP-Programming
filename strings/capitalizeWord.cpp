/*
    //**********CAPITALIZE THE WORD*******
*/
#include<iostream>
using namespace std;
void capital(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]>='a' and arr[i]<='z'){
            arr[i]=arr[i]-'a'+'A';       // subtract lower if L->U , subtract upper if u->L           
        }
    }
}
int main(){
    char arr[20];
    cin>>arr;
    capital(arr);
    cout<<arr<<endl;
}