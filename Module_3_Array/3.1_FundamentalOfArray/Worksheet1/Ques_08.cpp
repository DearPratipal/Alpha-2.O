//Question 8: Write a program that takes 5 integers as input from the user and stores them in an array.

#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter 5 integers: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        }
        cout<<"The array is: ";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
            }
            

    return 0;
}