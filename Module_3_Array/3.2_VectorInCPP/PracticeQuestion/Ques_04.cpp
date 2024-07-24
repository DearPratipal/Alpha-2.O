//Two Pointers : Write a program to reverse the array without using any extra array.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element of array: ";
        cin>>arr[i];
        }
        int start=0,end=n-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
            }
    cout<<"The reverse array is: ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
                }
                return 0;
}