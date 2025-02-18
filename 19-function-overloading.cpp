#include<iostream>
using namespace std;

void sum(int a, int b, float z){
	cout<<"Pehla wala function call shu\n";
}

void sum(float c, int d, int e){
	cout<<"Dwaim function call shu";
}

void display(int n = 10){
	cout<<"N value: "<<n;
}

int main(){
//	sum(1, 2, 3);
	display();
}
