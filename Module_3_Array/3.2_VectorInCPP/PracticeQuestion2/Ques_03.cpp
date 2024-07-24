//: Sort the array of 0’s, 1’s and 2’s. (LeetCode 7S) M-T DagAlgorith

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(-3);
    arr.push_back(4);
    arr.push_back(-5);
    arr.push_back(6);
    arr.push_back(-7);
    arr.push_back(-8);
    arr.push_back(9);
    arr.push_back(10);

    int n = arr.size();
    int i = 0;
    int j = n-1;
    int k = 0;
    while(k<=j){
        if(arr[k] < 0){
            swap(arr[i], arr[k]);
            i++;
            k++;
            }
            else if(arr[k] > 0){
                swap(arr[k], arr[j]);
                j--;
                }
                else{
                    k++;
                    }
                    }
                    for(int i=0; i<arr.size(); i++){
                        cout<<arr[i]<<" ";
                        }
                        return 0;
                    }