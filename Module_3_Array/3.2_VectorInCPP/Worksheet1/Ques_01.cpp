//Find the last occurrence of x in the array.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,x;
    cout<<"Enter the Size of Array";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Elements of Array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"Enter the Element to be searched";
        cin>>x;
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x){
                cout<<"Element Found at "<<mid+1<<" Position";
                return 0;
                }
                else if(arr[mid]>x)
                high=mid-1;
                else
                low=mid+1;
                }
                
}