//Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element of Array : ";
        cin>>arr[i];
        }
        
        int product=1;
        for(int i=0;i<n;i++){
            product=product*arr[i];
            }
            cout<<product;

            return 0;
            
}