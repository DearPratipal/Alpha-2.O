//Find the second largest element in the given Array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        int max=arr[0];
        int sec_max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                sec_max=max;
                max=arr[i];
                }
                else if(arr[i]>sec_max){
                    sec_max=arr[i];
                    }
                    }
                    cout<<"Second largest element is: "<<sec_max;
                    return 0;
                    
}