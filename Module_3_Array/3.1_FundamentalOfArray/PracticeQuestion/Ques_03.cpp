//Find the element x in the array . Take array and x as input.

#include<iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"Enter the Number of Element in array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"Enter the Element to be searched : ";
        cin>>x;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                cout<<"Element Found at "<<i+1<<" position";
                }
                }
                return 0;
                
}