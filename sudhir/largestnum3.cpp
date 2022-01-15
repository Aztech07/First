#include<iostream>
using namespace std;
int islargestnum(int,int,int);
int main(){
	int d=73,e=34,f=36,l;
	l=islargestnum(d,e,f);
	cout<<"largest number among "<<d<<" "<<e<<" "<< f<<" is "<<l<<"."<<endl;
}
int islargestnum(int a,int b,int c){
	if(b<=a && c<=a){
		return a;
	}
	if(c<=b && a<=b){
		return b;
	}
	if(a<=c && b<=c){
		return c;
	}
}
