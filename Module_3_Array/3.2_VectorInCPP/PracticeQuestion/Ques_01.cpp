//Write a program that initializes a vector of integers with values {1, 2, 3, 4, 5}. 
//Use the push_back function to add the value 6 to the vector. 
//Then use the pop_back function to remove the last element.
//Print the final vector to verify the operations

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        }

        return 0;
}