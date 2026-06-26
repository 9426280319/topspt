#include<iostream>
using namespace std;
template <typename T>
T add(T a, T b){
	T c=a+b;
	return c;
}

main(){
	int ans= add(12,34);
	cout<<"\n add of int="<<ans;
	float ans2= add(1.2,6.7);
	cout<<"\n add of float="<<ans2;
}
