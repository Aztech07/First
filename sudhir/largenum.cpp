#include<iostream>
using namespace std;
void printlargenum(int,int);
void f4();
int f2();
int f1(int a,int b);

int main(){
	printlargenum(40,20);
	
	f4();
	
	int c=34,d=33;
	int m=f1(c,d);
	cout<<"large is "<<23<<endl;
	
	f2();
	int val=f2();
	cout<<"larger is "<<val<<endl;
	//return 0;
}
void printlargenum(int a,int b){
		if(a<b){
			cout<<b<<" is largest.\n";
		}
		else{
			cout<<a<<" is largest.\n";
		}
}
void f4(){
	int a=8,b=7;
	if(a<b){
		cout<<b<<" is large.\n";
	}
	else{
		cout<<a<<" is large.\n";
	}
}
int f1(int a,int b){
	if(a<b){
		return b;
	}
	else{
		return a;		
	}
}
int f2(){
	int a=56,b=67;
	if(a<b){
		return b;
	}
	else{
		return a;
	}
}	
	
	
