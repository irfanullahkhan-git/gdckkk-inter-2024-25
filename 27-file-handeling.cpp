#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string line;
	ifstream myfile("test.txt");
	int line_no = 0;
	while(getline(myfile, line)){
		line_no++;
		cout<<"\nLine Number: "<<line_no<<endl;
		cout<<line;	
	}
}
