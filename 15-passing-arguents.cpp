#include<iostream>
using namespace std;

int sum(int n1, int n2){
	return n1 + n2;
}

int main(){
	// passing constants in arguments
	
	int result;
	result = sum(10, 20); // here 10 and 20 are constant values

	int a = 10;
	int b = 20;
	result = sum(a, b); // here a and b both are variables;
		
}
