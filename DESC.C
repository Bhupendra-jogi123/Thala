//	Sorting the array
#include <stdio.h>
#include <stdlib.h>
#include <pic18f452.h>
void main(void) {
    int i,j,temp;
    int num_asc[] = {7,2,5,1,6};
 for(i=0; i<=4; i++){                  // point to LHS number
        for(j=i+1;j<=4;j++)               // point to RHS number
              // MSDELAY(55250);

            if (num_asc[i] < num_asc[j]){     // if LHS > RHS , change the position
            temp = num_asc[i];
            num_asc[i] =num_asc[j];
            num_asc[j]= temp;
        }
    }
    TRISA=0;
    for(i=0; i<=4; i++)
    {
       // MSDELAY(250);
        PORTA=num_asc[i];
    }
}

