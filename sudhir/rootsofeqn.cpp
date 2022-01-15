	#include<iostream>
#include<cmath>
using namespace std;
void printrootsofquad(float,float,float);
int main(){
	printrootsofquad(4,2,2);
}
void printrootsofquad(float a,float b,float c){
	cout<<"It is of format "<<a<<"x^2 - "<<b<<"x + "<<c<<endl;
	float dis=((b*b)-(4*a*c));
	float R1,R2;
	if(dis>0){
		R1=(-b+sqrt(dis))/(2*a);
		cout<<R1<<" is first root."<<endl;
		R2=(-b-sqrt(dis))/(2*a);
		cout<<R2<<" is second root."<<endl;
		}
	else if(dis==0){
		R1=(-b)/(2*a);
		cout<<R1<<"is the root."<<endl;
		R2=(-b)/(2*a);
		cout<<R2<<"is the root."<<endl;
	}	
}
