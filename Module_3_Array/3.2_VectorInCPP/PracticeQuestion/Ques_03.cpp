//: Write a program to copy the contents of one array into another in the reverse order.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        vector<int> rev(n);
        for(int i=0;i<n;i++){
            rev[i]=arr[n-i-1];
            }
            cout<<"The reverse array is: ";
            for(int i=0;i<n;i++){
                cout<<rev[i]<<" ";
                }
                return 0;
                }
