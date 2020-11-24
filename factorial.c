#include <stdio.h>
int n;
long int fact(int n)
{
	if(n==0){
		return 1;
	}
	    return(n*fact(n-1));
}
int main()
{
	scanf("%d",&n);
	printf("factorial of n: %ld",fact(n));
}