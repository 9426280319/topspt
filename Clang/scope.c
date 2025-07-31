#include<stdio.h>
int x=200;  //global scope
void display(){
}
void add(int m, int n){  //formal parameter
	printf("\n addition of %d and %d=%d",m,n,m+n);
}
main(){
	{
	
	int a=10;// local scope 
	printf("\n x=%d",x);
}
add(12,34);  
//printf("\n m=%d",m);
printf("\n a=%d",x);
display();
}
