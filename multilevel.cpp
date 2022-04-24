#include<iostream>
#include<conio.h>
using namespace std;
class student{
	protected:
		char name[50];
		int roll;\
		public:
			void getdata(){
				cout<<"enter the name and roll of a student:"<<endl;
				cin>>name>>roll;
			}
			void displaydata(){
				cout<<"the name of student is:"<<name<<endl<<"the roll of a student:"<<roll<<endl;
			}
};
class test:public student{
	protected:
	float sub1,sub2;
	public:
		void getmarks(){
			cout<<"enter the marks of two subjects:"<<endl;
			cin>>sub1>>sub2;
		}
		void displaymarks(){
			cout<<"the marks of two subject:"<<sub1<<"and"<<sub2<<endl;
		}
};

class result:public test{
	float total;
	public:
		void display(){
		total=sub1+sub2;
		cout<<"the total is::"<<total<<endl;
}
};
int main(){
	result r;
	r.getdata();
	r.getmarks();
	r.displaydata();
	r.displaymarks();
	r.display();
	getch();
	return 0;
}

