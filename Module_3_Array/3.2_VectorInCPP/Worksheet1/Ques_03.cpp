//Write a program that takes n integers as input from the user and stores them in a vector.Print the vector using a loop.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element: ";
        cin>>arr[i];
        }

        //Print 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            }


}