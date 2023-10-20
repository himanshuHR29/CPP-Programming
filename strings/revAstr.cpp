#include <iostream>
using namespace std;
void swap(char arr[],int i1,int i2){
    int temp=arr[i1];
    arr[i1]=arr[i2];
    arr[i2]=temp;
}
int getLength(char arr[]){
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
            c++;
    }
    return c;
}
void reverseString(char arr[]){
    int start=0;
    int end=getLength(arr)-1;
    while(start<end){
        swap(arr,start,end);
        start++;
        end--;
    }
}
int main(){
    char arr[10];
    cin>>arr;
    reverseString(arr);
    cout<<arr;
    return 0;
}



//***********************OR***************
/*
#include <iostream>
using namespace std;
int getLength(char arr[]){
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
            c++;
    }
    return c;
}
void reverseString(char arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}
int main(){
    char arr[10];
    cin>>arr;
    cout<<arr<<endl;
    int size=getLength(arr);
    reverseString(arr,size);
    cout<<arr;
    return 0;
}
*/
