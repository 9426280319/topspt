#include<stdio.h>
main()
{
	int a=10; 
	int*ptr;  // pointer declare
	ptr=&a;
	printf("\n pointer value=%d address=%p",*ptr,ptr);   // value access
	*ptr=20;
	printf("\n a=%d",a);
}
