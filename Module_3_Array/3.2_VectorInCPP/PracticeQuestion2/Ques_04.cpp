//Merge two sorted arrays. (LeetCode - 88)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6,8,10};
    vector<int> arr3;
    int i = 0, j = 0, k = 0;


    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
            }
            else{
                arr3.push_back(arr2[j]);
                j++;
                }
                }


                while(i < arr1.size()){
                    arr3.push_back(arr1[i]);
                    i++;
                    }

                    while(j < arr2.size()){
                        arr3.push_back(arr2[j]);
                        j++;
                        }

                    //Printing Sorted Array: 
                        for(int i = 0; i < arr3.size(); i++){ 
                            cout << arr3[i] << " ";
                            }

                            return 0;
}