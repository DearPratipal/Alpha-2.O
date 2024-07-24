//: Find the doublet in the Array whose sum is equal to the given value x. (LeetCode - 1) (Two Sum)

#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n,x;

    cout<<"The Size or Array: ";
    cin>>n;
    
    cout<<"The the Target: ";
    cin>>x;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the Array Element "<<i+1 <<" :";
        cin>>arr[i];
        }
//Proble Sulution
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

                if(arr[i]+arr[j]==x){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    return 0;
                    }
                }
            }
    return 0;
                    
}