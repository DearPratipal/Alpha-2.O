//Rotate the given array ‘a’ by k steps, where k is non-negative. Note : k can be greater than n as well where n is the size of array ‘a’. 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the number of steps: ";
    cin>>k;
    
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element of Array: ";
        cin>>a[i];
        }



}