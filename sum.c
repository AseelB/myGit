#include<stdio.h>
<<<<<<< HEAD
int main(){
int s;
int x;
int y;
printf("Please enter the first number\n");
scanf(x,%d);
printf("Please enter the second number\n");
scanf(y);
s=x+y;
printf("The sum of %d and %d is : %d ",x,y,s);
return(0);
}
=======
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
}

>>>>>>> bfe2188ec28c1ef0d110502a9d7b1510baad59cc
