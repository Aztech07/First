#include<cstring>
#include<iostream>
using namespace std;

class SGmotors{
	public:
	void getdata(string arr[5]);	
	void display(){
		string arr[5];
		cout<<arr[0]<<"\n "<<arr[1]<<"\n "<<arr[2]<<"\n "<<arr[3]<<"\n "<<arr[4]<<"\n "<<endl;
	}
};
int main(){
	SGmotors SG;
	SG.getdata(string ferrari[5]={"Bentley","2019","Black","5632","9.5"});
	SG.display();

return 0;
}
