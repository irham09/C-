#include<iostream>
#include<vector>
#include<stdio.h>


using namespace std;

template<class T>

void display(vector<T> &v){
	for(int i=0; i<v.size(); i++){
		cout<<	v[i] << " ";
	}
}


int main(){
	
	vector<int> vec;	// creating a vector object as vec
	int element, size;
	cout<<"Enter the element"<<endl;
	cin>>size;			// size of the vector list taken
	
	
	for(int i = 0; i < size; i ++){
		cout<<"Enter the element [ "<< i <<"] : ";
		cin>> element;
		vec.push_back(element); // makes the element to be inserted into the vector list
	}
	
		vector<int> :: iterator it = vec.begin();		// a predefined function from vectors as an iterator
		vec.insert( it, 50);			// " it " is the iterator for the code which is 0 by default
	
		display(vec);
		cout<< endl;
 // the output will start from 50
 // add on the value of it and obtain further results
 
 		vec.insert(it+2, 120); // the value of 120 will print at the value of 2 
 		display(vec);

		return 0;
}

