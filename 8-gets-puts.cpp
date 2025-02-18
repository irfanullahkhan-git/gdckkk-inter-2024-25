#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main(){
	char name[100];
	// Method 1. does not support space
//	cout<<"Please enter your name\n";
//	cin>>name;
//	cout<<"Your name is "<<name;

	// Method 2: Supports spaces
//	cout<<"Please enter your name\n";
//	gets(name);
//	cout<<"Your name is "<<name;

	// puts function adds \n at the end of line 
	cout<<"Please enter your name\n";
	gets(name);
	puts("Your name is ");
	puts(name);
	cout<<"and you are student of GKKKDC.";
	
	// getch(). it is used for input a character
	char gender;
	cout<<"Please enter your gender. F/M\n";
	gender = getch();
	cout<<"Your gender is "<<gender;
}
