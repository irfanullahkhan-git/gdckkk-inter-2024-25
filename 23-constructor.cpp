#include<iostream>
using namespace std;

class Student{
	int roll_no;
	string name;
	int age;
	
	public:
		Student(){
			roll_no = -1;
			name = "Not Set";
			age = -1;
		}
		void setRollNo(int r){
			roll_no = r;
		}
		void setName(string s){
			name = s;
		}
		void setAge(int a){
			age = a;
		}
		
		void setAll(int r, string n, int a){
			roll_no = r;
			name = n;
			age = a;
		}
		
		int getRollNo(){
			return roll_no;
		}
		
		string getName(){
			return name;
		}
		
		int getAge(){
			return age;
		}
				
		void display(){
			cout<<"ID: "<<getRollNo()<<"\tName: "<<name<<"\tAge: "<<age<<endl;
		}
	
};

int main(){
	Student stu;
	stu.display();
	stu.setRollNo(1);
	stu.setName("Waqas");
	stu.setAge(15);
	stu.display();
	
	Student s2;
	
	s2.display();
}
