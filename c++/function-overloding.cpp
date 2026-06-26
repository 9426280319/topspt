#include<iostream>
using namespace std;
class maths{
	public:
		void add(int a,int b){
			cout<<"\n addition of two int="<<a+b;
		}
		void add (float x,float y, int z){
			cout<<"\n addition of three var="<<x+y+z;
		}
};
main(){
	maths m1;
	m1.add(12.34,18.8,100);
	m1.add(123,456);
	
}
