#include<stdio.h>
#include<conio.h>
int main(){
int unit,sum;
float total;
printf("enter total unit consumed:");
scanf("%d",& unit);
if (unit<=100){
	sum=unit*8+50;
	}
	else if(unit<=100){
		sum=80+(unit-20)*7.5;
		}
		else if(unit<=200)
		sum=80+(80*7.5)+(unit-100)*8.5;
	
		else{
			sum=80+80*7.5+100*8.5+(unit-200)*9.5;
		}
		total=1.15*sum;
		printf("total fee is :%f",total);
return 0;
}
