//Ques: Sort the array of 0’s and 1’s.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"the size: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the Array Element: ";
        cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    }
                    }
                    }
                    for(int i=0;i<n;i++){
                        cout<<arr[i]<<" ";
                        }
                        return 0;
    }
