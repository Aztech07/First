#include<iostream>
using namespace std;

int main(){
	
	float a=4,b=4,c=3;
	float d=2;
	try{
		if (a-b!=0){
			d=c/(a-b);
			cout<<d;
		}
		else{
			throw (a-b);
			cout<<"it is an exception"<<endl;
		}
	}
	catch(float i){
			cout<<"It is an exception because a-b is: "<<i<<endl;
		}
	return 0;
}
