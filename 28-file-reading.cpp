#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream myfile("test.txt");
	string str, str1, str2;
	myfile>>str>>str1>>str2;
	cout<<str<<" - "<<str1<<" - "<<str2;
	string str4;
	getline(myfile, str4);
	cout<<"\n"<<str4;
}
