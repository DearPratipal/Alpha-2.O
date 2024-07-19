//Question 7: Change the second element of the array arr to 25 and print the updated array.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    
    arr[1] = 25;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
        }

        return 0;

}