#include<iostream>
using namespace std;

class student{
	
	public: // access specifier
		int roll_no;
		string name;
		int age;
		void display(){
			cout<<"Roll No: "<<roll_no<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

int main(){
	student s;
	s.roll_no = 10;
	s.name="Haseeb";
	s.age = 17;
	s.display();
	
	student bal_s;
	bal_s.roll_no = 20;
	bal_s.name = "Inam";
	bal_s.age = 17;
	bal_s.display();
}
