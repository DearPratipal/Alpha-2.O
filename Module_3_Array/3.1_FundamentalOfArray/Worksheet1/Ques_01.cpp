//Question 1: Explain what an array is in C++. 

#include<iostream>
using namespace std;

int main(){
	int arr[]={0,1,2,3};

	cout<<arr[2]<<endl;
    cout<<&arr<<endl;
	
	return 0;
}
/*
Array is Static Memory Allocation it store contigues, Item.
i.e:    If any element store 0 index, than next store <Datatype> index.
eg. 1- store 0 index
    2- store 4 index
    3- store 8 index
    4- store f index (hexadecimal indexing)
*/