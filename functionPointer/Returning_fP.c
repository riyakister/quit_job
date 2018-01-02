/* How to return a function pointers */
#include <stdio.h>
/*
int main()
{
 int i =10;
 int *ptr;
 int *ptr1 = &i;
 
 ptr = ptr1;
 
 int d = *ptr;
 printf("d = %d\n",d);
 return 0;		
}*/


int add(int a, int b)
{
	return a+b;
}


/*int (*fptr(int type ))(int,int)
{
	if(type == 1)
	return add;
	
}*/
typedef int(*mathdef)(int,int);
mathdef fptr()
{
	
  return add;	
}

/*
int (*fptr())(int,int)
{
	return add;
	
}*/

int main()
{
  int (*funptr)(int,int);
  
     funptr = fptr();
     int c = (*funptr)(15,10);
     printf("%d\n",c);	
	
	return 0;
}
