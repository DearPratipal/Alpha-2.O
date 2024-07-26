//Ques: Move all negative numbers to the beginning and positive to end with constant extra space

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

    int n = arr.size();
    int i = 0, j = n - 1;
    while(i < j){
        if(arr[i] < 0){
            i++;
            }
            else if(arr[j] > 0){
                j--;
                }
                else{
                    swap(arr[i], arr[j]);
                    i++;
                    j--;
                    }
                    }
                    for(int i = 0; i < n; i++){
                        cout << arr[i] << " ";
                        }
                        return 0;


}