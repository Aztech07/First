#include<iostream>
#include<string.h>
using namespace std;

class Car{
	 string name,model,mileage,odometer;
	 int cylinder;
	 public:
	 	void specs(){
		cout<<endl<<"name of car "<<name<<"\nmodel of car"<<model<<"\nmileage of car"<<mileage
		<<"\nodometer reading"<<odometer<<"\nnumber of cylinders.\n"<<cylinder;
		}
					
		Car(string n,string m,string mi,string od){
			cout<<"\nThe second constructor was called.";
			name=n;
			model=m;
			mileage=mi;
			odometer=od;
					
		}
		Car(string n,string m,string mi,string od,int cy){
			cout<<"\n Third constructor.";
			name=n;
			model=m;
			mileage=mi;
			odometer=od;
			cylinder=cy;
		}
	
		Car(string n,int a){
			cout<<"\n sixth constructor.";
			name=n;
			cout<<n;
		}
};
int main(){
	Car c("","","","");	
	Car c1("Ferrari","2019","6","9800");
	c1.specs();	
	Car c2("Audi","2021","5","5600");
	Car c3("BMW","2018","4","5500");
	Car c4("RR","2022","8.5","0",12);
return 0;
}
