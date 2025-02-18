#include<iostream>
using namespace std;
int n1;

void print(){
	int n1;
	n1 = 10;
	cout<<"n1 = "<<n1<<endl;
}

void printAgain(int x){
	cout<<"X = "<<x;
}

int main(){
	print();
	cout<<"We printed value of n1, which is: "<<n1;
	int x = 20;
	printAgain(x);
}
