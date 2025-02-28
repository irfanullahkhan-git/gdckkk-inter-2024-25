#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string name, father_name, age, address;
	ifstream my_file;
	my_file.open("data.txt");
	while(!my_file.eof()){
		my_file>>name>>father_name>>age>>address;
		cout<<name<<"\t"<<father_name<<"\t"<<age<<"\t"<<address<<endl;
	}

}
