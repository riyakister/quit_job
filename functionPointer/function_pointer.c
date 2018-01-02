/*
 * function_pointer.c
 * 
 * Copyright 2017 SP <sp@sp-Lenovo-G550>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int add(int a,int b)
{
  return a+b;	
}

int main()
{
	int (*fun)(int,int) = add; //new way
	//fun = &add; //old way
	
	//now we call function using function pointer
	int c = fun(5,10);  //new way
	int d = (*fun)(10,5);//traditional way;
	printf("c = %d\t,d = %d\n",c,d);
	return 0;
}

