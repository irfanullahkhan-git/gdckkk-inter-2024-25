#include<iostream>
using namespace std;

class Student{
	int roll_no;
	string name;
	int age;
	
	public:
		Student(){
			roll_no = -1;
			name = "N/A";
			age = -1;
			cout<<"Default Constructor called\n";
		}
		
		Student(int r, string n, int a){
			roll_no = r;
			name = n;
			age = a;
			cout<<"Argumented constructor called\n";
		}
		
		Student(string n, int r,  int a){
			roll_no = r;
			name = n;
			age = a;
			cout<<"2nd Argumented constructor called\n";
		}
		
		void display(){
			cout<<"Roll No: "<<roll_no<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

int main(){
	// object with implicit constructor call
	Student i;
	i.display();
	
	// object with explicit constructor call
	
	Student e(1, "Ahmed", 20);
	e.display();
	
	Student s("Ahmed", 1, 20);
	s.display();
	
}
