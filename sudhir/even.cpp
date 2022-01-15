#include<iostream>
using namespace std;
int printeo(int);
int main(){
	printeo(24);
	return 0;
}
int printeo(int a){
if(a%2==0){
	cout<<a<<" is even \n";
	}
	else{
		cout<<a<<" is odd.\n";
	}
	return a;
}

