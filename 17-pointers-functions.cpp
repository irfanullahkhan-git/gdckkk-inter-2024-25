#include<iostream>
using namespace std;

void increment(int * n){
	(*n)++;
}

int main(){
	int x = 10;
	int * ptr = &x;
	increment(ptr);
	cout<<"X = "<<x;
}
