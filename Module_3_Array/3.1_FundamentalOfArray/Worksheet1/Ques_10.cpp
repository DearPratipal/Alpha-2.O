//Question 10: Write a program that declares an array of size 5, 
//takes input from the user to fill the array, and prints the array elements in reverse order.

#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
        }
        cout<<"The array elements in reverse order are: ";
        for(i=4;i>=0;i--){
            cout<<arr[i]<<" ";
            }

    return 0;

}