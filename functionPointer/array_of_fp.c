/* Array of function pointers */
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
int sub(int a, int b)
{
	return a-b;
}


/*int (*fptr(int type ))(int,int)
{
	if(type == 1)
	return add;
	
}*/
typedef int(*mathdef)(int,int);

/*
int (*fptr())(int,int)
{
	return add;
	
}*/

int main()
{
   //with using type def
   //mathdef Arr[2] ={add,sub};
   int (* Arr[2])(int,int) ={add,sub};
   int c = (*Arr[0])(5,6);
   int d = (*Arr[1])(15,5); 	
     printf("add=%d  sub = %d\n",c,d);	
	
	return 0;
}
