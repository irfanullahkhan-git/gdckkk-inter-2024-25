#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream myfile;
	myfile.open("test.txt");
	myfile<<"Hello World. this is my very first example line.";
	myfile.close();	
}
