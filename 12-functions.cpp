#include<iostream>
using namespace std;

int sum(int, int);
int subtract(int i, int j){
	return i - j;
}
int main(){
	int a = 20;
	int b = 5;
	int result = sum(a, b);
	cout<<"Addition: "<<result<<endl;
	result = subtract(a, b); 
	cout<<"Subtraction:"<<result;
}

int sum(int n1, int n2){
	int result = n1 + n2;
	return result;
}
