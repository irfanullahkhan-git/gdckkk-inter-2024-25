#include<iostream>
using namespace std;

int main(){
	int num = 10;
	int * ptr = &num;
	cout<<"ptr value: "<<ptr<<endl; 
	cout<<"ptr address -> value: "<<*ptr<<endl;		

	
	float flt_num = 10.5;
	float * flt_ptr = &flt_num;
	cout<<"flt_ptr value: "<<flt_ptr<<endl; 
	cout<<"flt_ptr address -> value: "<<*flt_ptr;

}
