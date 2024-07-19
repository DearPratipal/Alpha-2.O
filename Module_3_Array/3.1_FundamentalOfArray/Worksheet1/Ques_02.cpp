//Question 2: Write the syntax to declare an array of 10 integers. 
#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10; i++){
        cout << arr[i] << endl;
    }
    return 0;
}