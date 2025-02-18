#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int marks;
	cout<<"Please enter your marks: ";
	cin>>marks;
	string result = (marks >= 40) ? "Pass" : "Fail";
	cout<<result;
}
