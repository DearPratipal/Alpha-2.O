//Count the number of elements in given array greater than a given number x.

#include<iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"Enter the number x: ";
        cin>>x;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]>x){
                count++;
                }
                }
                cout<<"The number of elements greater than "<<x<<" is "<<count;
                return 0;
}