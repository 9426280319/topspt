#include<iostream>
using namespace std;
class maths{
	public:
		maths(){
			cout<<"\n defult constructor called";
		}
		maths(int a,int b){
			cout<<"\n parameterized constructor called: ";
			cout<<"a="<<a<<"b="<<b;
		}
};
main(){
	maths m1,m2;
	maths m3(12,34);
}
