#include<stdio.h>
int main(){
	int ye=69,m=2,d=14,z;
	float x,y;
	//your age in years
	x=ye+(m/12.0)+(d/365.0);
	//your age in months
	y=ye*12+m+(d/31.0);
	//your age in days
	z=ye*365+m*31+d;
	printf("age in years = %f \n",x);
	printf("age in months = %f \n",y);
	printf("age in days = %d",z);
	return 0;
}