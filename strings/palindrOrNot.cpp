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
int checkPalindrome(char arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
int main(){
    char arr[10];
    cout<<"Enter the word"<<endl;
    cin>>arr;
    //cout<<arr<<endl;
    int size=getLength(arr);
    reverseString(arr,size);
    cout<<"Your word is reversed here: "<<arr<<endl;
    cout<<endl;
    
    cout<<"Now the check for palindrome: ";
    cout<<checkPalindrome(arr,size)<<endl;
    // cout<<arr;
    return 0;
}
