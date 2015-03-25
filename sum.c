#include<stdio.h>
 int main(){	
 	int sum=0;
	int n=0;
	printf("please enter a number :\n");
	scanf("%d", &n);
	for(int i=1; i<=n;i++){
		sum=sum+i;
	}
	printf("The sum of %d is %d.\n", n, sum);
	return sum;


