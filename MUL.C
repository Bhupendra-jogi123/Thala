#include <stdio.h>
#include <stdlib.h>
#include <pic18f452.h>//multiplication using successive addition
void main(void) {
    //static int v_mem[] = 0x55;       @0x0005
    int num1, num2;
    int result,i;

    result = 0;
    num1 = 0x08;
    num2 = 0x06;

    for(i=1; i<=num2; i++)
    {
        result = result + num1;
    }
    TRISB =0;
    PORTB = result;
        TRISC=0;
    PORTC=num1*num2;

}

