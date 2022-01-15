	#include<iostream>
using namespace std;

int printpattern(){
	//int a=0;
	for(int i=1;i<=9;i++){
	//	a+=1;
		for(int j=0;j<i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;	
	}
}

int main(){
	printpattern();
}
