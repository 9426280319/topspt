#include<stdio.h>
main()
{
	int maths,phy,chem,total,subtotal;
	printf("\n enter the maths phy chem marks");
	scanf("%d %d %d",&maths,&phy,&chem);
	printf("\n maths=%d \n phy=%d \n chem=%d",maths,phy,chem);
	if(maths >= 65 && phy >= 55 && chem >= 50);
	total=maths+phy+chem;
	subtotal=maths+phy;
	printf("\n maths+phy+chem=%d",total);
	printf("\n maths+phy=%d",subtotal);
	if(total>=190 || subtotal>=145){
		printf("\n eligible for admision");
	}
	else{
		printf("\n not eligiable for admision");
	}
}
