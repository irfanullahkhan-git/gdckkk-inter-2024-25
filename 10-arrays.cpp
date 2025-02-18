#include<iostream>
using namespace std;

int main(){
	
//	int result[5] = {10, 20, 30, 40, 45};
//	cout<<result[1];

	//Program - 2
	/*
	int result[5];
	cout<<"Please enter Marks\n";
	cin>>result[0];
	cout<<"You have entered : "<<result[0];
	*/
	
//	Program 3

	int result[5];
	cout<<"Please enter marks of 5 students\n";
	for(int index = 0; index < 5; index++){
		cin>>result[index];
	}
	cout<<"You have entered following marks\n";
	for(int index = 0; index < 5; index++){
		cout<<result[index]<<"\t";
	}
	
	
}
