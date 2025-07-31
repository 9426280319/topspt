#include<stdio.h>
main()
{
	int x=10,y;
	x++;//increment by 1
	printf("\n x=%d",x);
	x--;//dcrement by 1
	printf("\n x=%d",x);
	//=================
	y=x++;//post increment
	//y=++x pre increment
	printf("\n y=%d \t x=%d",y,x);
	
}
