#include<iostream>
using namespace std;
class category{
	public:
		int cid;
		char name[10];
		void getcategory(){
			cout<<"\n enter category id and name";
			cin>>cid>>name;
		}
};
class product:public category{
	public:
		int pid;
		char name[10];
		float price;
		void getproduct(){
			cout<<"\n enter pid name price";
		}
		void showproduct(){
			cout<<"\n cid= "<<cid<<"\n name="<<name;
			cout<<"\n pid="<<pid<<"\n name="<<name;
			
		}
};
main(){
	product p1;
	p1.getproduct();
	p1.showproduct();
}
