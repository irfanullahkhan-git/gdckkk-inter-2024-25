#include<iostream>
using namespace std;
class Person{
	public:
	int id;
	string name;
	int age;
};

class Student:Person{
	public:
	int clas;
	string section;
	int marks;
	
//	Student(int i, string n, int a)
	
	void display(){
		cout<<"******************\n";
		cout<<"ID:"<<id<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
		cout<<"Class:"<<clas<<endl;
		cout<<"Section:"<<section<<endl;
		cout<<"Marks:"<<marks<<endl;
		cout<<"******************\n";
	}
};

class Teacher:Person{
	public:
	string subject;
	int salary;
	
	
};
int main(){
	Student s;
	s.id = 1;
	s.name = "Ali";
	s.age = 20;
	s.clas=12;
	s.section="CS";
	
	s.display();
}
