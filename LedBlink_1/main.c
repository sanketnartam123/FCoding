/* program for led */

#include<stdio.h>
#include<lpc213x.h>
void delay ();


void main()
{
	PINSEL0=0x00000000;	 
	IO0DIR=0xffffffff;

	while(1)
	{
	IO0CLR=0xffffffff;	
	delay ();	
    IO0SET=0xffffffff;
	delay ();
	IO0CLR=0xffffffff;

	}
}

void delay ()
{
	 unsigned int i,j;

	 for(i=0;i<500;i++)
	 {
	 	for(j=0;j<5000;j++)
		{
		}
	 }
} 


/*
void delay (unsigned long wait)
{
	T0TCR=0x1;
	T0PR=0x3B;
	while(T0TC <=wait)
 {
 }
  	T0TC=0;
	T0TCR=0;
} */

   