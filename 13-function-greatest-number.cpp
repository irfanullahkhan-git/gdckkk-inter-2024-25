#include<iostream>
#include<conio.h>
using namespace std;
int findMaximum(int n1, int n2, int n3){
	if(n1 > n2 && n1 > n3){
		return n1;
	}
	if(n2 > n1 && n2 > n3){
		return n2;
	}
	if(n3 > n1 && n3 > n2){
		return n3;
	}
}

int findMax(int n1, int n2, int n3){
	int max = n1;
	max = n2 > max ? n2: max;
	max  = n3 > max ? n3: max;
	return max;
}

int main(){
	int a, b, c;
	cout<<"Please enter three digits\n";
	cin>>a>>b>>c;
	int max = findMaximum(a, b, c);	
	cout<<"The maximum number is: "<<max<<endl;
	max = findMax(a, b, c);	
	cout<<"The maximum number is: "<<max;
	getch();
	return 0;
}
