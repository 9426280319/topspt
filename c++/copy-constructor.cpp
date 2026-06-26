#include<iostream>
using namespace std;
class maths {
public:
	
	int a,b;
	//paramitarized constructor
	maths(int x,int y){
		a=x;
		b=y;
	}
	//copy constructor
	maths(maths & m1){
		a=m1.a;
		b=m1.b;
		
	}
	void display(){
		cout<<"\n a="<<a<<"\t b="<<b;
	}
};
main(){
	maths m1(23,45);
	m1.display();
	maths m2=m1;
	m2.display();
}

