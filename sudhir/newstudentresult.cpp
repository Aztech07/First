#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class SectionA{
	protected:
		char studentname;
		void getdata(char studentname);	
		
};

class SectionB{
		protected:
		char studentname;
		void getdata(char studentname);		
};

class Department:protected SectionA,protected SectionB{
	protected:
		int marks;		
		void oopsprof(int submarks);
		void dsprof(int submarks);
		void deprof(int submarks);

		float percentage=((oopsprof(marks)+dsprof(marks)+deprof(marks))/300)*100;
			bool ispassed=true;
			void display(){
				if(percentage<40){
					ispassed=false;
				}
				if(ispassed==true){
					cout<<" has passed. "<<endl;
				}
				else{
					cout<<" has failed. "<<endl;
				}
			}

};

int main(){
	SectionA secA;
	secA.getdata('nakul');
	SectionB secB;
	secB.getdata('sudhir');
	Department D;
	D.oopsprof(40);
	D.dsprof(60);
	D.deprof(90);
	D.display();

return 0;
}
