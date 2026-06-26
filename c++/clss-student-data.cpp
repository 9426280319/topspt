#include<iostream>
using namespace std;
class student{
	public:
		//data member
		int enroll;
		char name[20];
		string email;
		int std;
		// member function
		void getstudentdata(){
			cout<<"\n enter enroll std";
			cin>>enroll>>std;
			cout<<"\n enter name and email";
			cin>>name>>email;
		}
		void showstudentdata (){
			cout<<"\n enroll="<<enroll<<"\t email="<<std;
			cout<<"\n name="<<name<<"\t email="<<email;
		}
		
};
main(){
	student s1,s2;
	s1.getstudentdata();
	s1.showstudentdata();
	cout<<"\n sec obj";
	s2.getstudentdata();
	s2.showstudentdata();
	
}
