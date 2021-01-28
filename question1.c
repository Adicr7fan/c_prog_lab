#include<stdio.h>
#include<math.h>

#define printf __mingw_printf
int main(){
	char a='x';
	short int b=10;
	int c=8;
	long d=12;
	long long e=22;
	float f=0.5;
	double g=0.64535;
	long double h=0.3848;
	printf("%c \n",a);
	printf("%hd \n",b);
	printf("%d \n",c);
	printf("%ld \n",d);
	printf("%lld \n",e);
	printf("%f \n",f);
	printf("%lf \n",g);
	printf("%Lf \n",h);
	return 0;
}