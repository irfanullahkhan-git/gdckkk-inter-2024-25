#include<iostream>
using namespace std;

void increment(int * n, int * n2){
	(*n)++;
	(*n2)++;
}
int main(){
	int num = 10;
	int num2 = 20;
	
	increment(&num, &num2);
	
	cout<<"Num value: "<<num<<endl;
	cout<<"Num2 value: "<<num2;
}
