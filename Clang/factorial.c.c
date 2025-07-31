#include<stdio.h>
int factfind(int num){
	if(num==1){
		return 1;
	}
int f=num*factfind(num-1);
return f;
}
main(){
	printf("\n factorial=%d",factfind(10));

}
