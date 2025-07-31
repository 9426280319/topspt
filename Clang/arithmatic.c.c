#include<stdio.h>
main()
{
int a,b,ans,reminder;
float div;
printf("\n enter the value of a and b");
scanf("%d %d",&a,&b);
ans = a+b;
printf("\n addition=%d",ans);
ans = a-b;
printf("\n sub%d",ans);
ans = a*b;
printf("\n mul=%d",ans);
div = a/b;
printf("\n div=%f",div);
reminder = a%b;
printf("\n rem=%d",reminder);
	
}
