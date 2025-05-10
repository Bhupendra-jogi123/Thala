#include<stdio.h>           /*header files*/
#include<stdlib.h>
#include<p18f4550.h>



void main(void)         //main function
{
    int sum;               //variable initialixatin and declaration
    sum=0;


    sum=0x7+0x02;          // logic of addition program


    TRISD=0;  //declaration of register
    PORTD=sum;


}

