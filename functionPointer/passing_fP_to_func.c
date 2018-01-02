#include <stdio.h>

int add(int a,int b)
{
  return a+b;	
}

int func1(int (*fptr)(int,int))
{
   int a,b;
   printf("enter a & b\n");
   scanf("%d 	%d",&a,&b);	
   
   //int c = (*fptr)(a,b);
   int c = fptr(a,b);
   return c;	
	
}

int main()
{
	
	int d = func1(&add);
	printf("d = %d\n",d);
	return 0;
}

