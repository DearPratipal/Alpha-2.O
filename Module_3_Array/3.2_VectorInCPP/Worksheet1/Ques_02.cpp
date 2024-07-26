/*Implement a program that initializes an empty vector of integers. 
Use a loop to add the numbers from 1 to 10 to the vector using push_back.
After each addition, print the current size and capacity of the vector.*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i=1;i<=10;i++){
        v.push_back(i);
    }
    cout<<"The size of Vectr :"<<v.size()<<endl;
    cout<<"The Capacity of Vectr"<<v.capacity()<<endl;
    return 0;
}