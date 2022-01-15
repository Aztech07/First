#include<iostream>
#include<cstring>
using namespace std;

void printcarspecs(string arr[],string arr1[]){
	cout<<"Car name "<<arr1[0]<<"\n"<<"Car model "<<arr1[1]<<"\n"
	<<"Car mileage "<<arr1[2]<<"\n"<<"Car colour "<<arr1[3]<<"\n"<<"Odometer rating "<<arr1[4]<<endl;
}

int main(){
	string ferrari[5] = {"Ferrari","2020","9","red","3600"};
	string audi[5] = {"Audi","2019","5","black","5600"};
	printcarspecs(ferrari,audi);

return 0;	
}
