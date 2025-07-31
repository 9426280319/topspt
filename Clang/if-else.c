#include<stdio.h>
/*
if (condition){
        //block
}
else{
}
*/
main()
{
float cp,sp;
printf("\n enter the value of cp and sp");
scanf("%f %f",&cp,&sp);
if(sp>cp){
	printf("\n profit and profit amount=%f",cp-sp);
}	
else{
	printf("\n loss and loss amount=%f",cp-sp);
}
}
