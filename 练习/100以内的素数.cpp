#include<stdio.h>
int main()
{
	int x;
	for(x=1;x<1000;x++){
	
	int i;
	int isprime = 1;
	for(i = 2;i<x; i++){
		if (x % i == 0){
			isprime = 0;
			break; 
		}
	}
	if (isprime == 1){
		printf("%d\n",x);
	}
}
	return 0;
}
