#include<iostream>
using namespace std;
int isleapyear(int year);

int main(){
	isleapyear(3996);
return 0;
}

int isleapyear(int year){
	int div=year%4;
	while(year>2000 && year<4000){
		if(div==0){
			cout<<"it is leap year."<<endl;	
			return div;
		}
				
		else{
			cout<<"not a leap year."<<endl;
			return 0;
		}
	}
}
