#include<iostream>
using namespace std;

int main(){
	float pi = 3.14;
	int num = (int) pi;
	int n1, n2;
	char name[100];
	
	cout<<num<<endl;
	cout<<"Please enter a number\n";
	cin>>num;
	cout<<"You have entered "<<num<<endl;
	
	cout<<"Please enter two numbers\n";
 	cin>>n1>>n2;
	cout<<"n1: "<<n1<<endl<<"n2: "<<n2<<endl;
	
	cout<<"Please enter your name\n";
	cin>>name;
	cout<<"Your name is :"<<name;
}
