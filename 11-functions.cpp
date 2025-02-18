#include<iostream>
using namespace std;

void displayCalculations(int n1, int n2){
	int res;
	res = n1 + n2;
	cout<<"The addition is: "<<res<<endl;
	
	res = n1 - n2;
	cout<<"The subtraction is: "<<res<<endl;
	
	res = n1 * n2;
	cout<<"The product is: "<<res<<endl;
	
	res = n1/n2;
	cout<<"The division is: "<<res<<endl;
}

int main(){
	int a = 20;
	int b = 5;
	displayCalculations(a, b);
	cout<<" - - - - - -  - - - - - -- - \n";
	int c = 30;
	int d = 10;
	displayCalculations(c, d);
	cout<<" - - - - - -  - - - - - -- - \n";
	displayCalculations(40, 5);
	
	cout<<" - - - - - -  - - - - - -- - \n";
	displayCalculations(c, d-5);
}
