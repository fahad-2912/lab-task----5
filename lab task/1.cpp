#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter angle a=");
	scanf("%d", &a);
	printf("enter angle b=");
	scanf("%d", &b);
	printf("enter angle c=");
	scanf("%d", &c);
	int total;
	total=a+b+c;
	if (total == 180 && a >= 0 && b >=0 && c >= 0){
	printf("its valid triangle");
    }
    else{
    printf("not valid triangle");
	}
	return 0;
}