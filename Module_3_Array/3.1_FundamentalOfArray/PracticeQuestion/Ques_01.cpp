//Given an array of marks of students, if the mark of any student is less than 35 print its roll number. 
//[roll number here refers to the index of the array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Numer of Student: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Marks of Student "<<i+1<<": ";
        cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]<35){
                cout<<"The Roll No. of Student : "<<i<<endl;
                }
                }
                return 0;

}