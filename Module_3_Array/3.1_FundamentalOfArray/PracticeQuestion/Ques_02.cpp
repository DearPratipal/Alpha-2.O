//Calculate the sum of all the elements in the given array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of Element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            }
            cout<<"The Sum of all the Element is: "<<sum;
            return 0;
}