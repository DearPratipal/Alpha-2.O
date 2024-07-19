
//Question 3: Declare an array of 5 floats.

#include<iostream>
using namespace std;

int main(){
    float arr[5];

    for(int i=0; i<5; i++){
        cout<<"Enter the value of "<<i+1<<" element: ";
        cin>>arr[i];
        }
        cout<<"The array is: ";
        for(int i=0; i<5; i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}