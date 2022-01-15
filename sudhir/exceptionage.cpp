#include<iostream>
using namespace std;

int main(){
	float age=17;
	try{
		if(age>=18.1){
			cout<<"You are eligible"<<endl;
		}
		else if(age!=18.00){
			cout<<"Not eligible"<<endl;
		}
		else{
			throw(age);
			cout<<"Yout should wait one month."<<endl;
		}
	}
	catch(float i){
		cout<<"It is not possible because age is: "<<age<<endl;
	}
	return 0;
}
