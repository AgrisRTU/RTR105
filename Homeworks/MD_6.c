#include "nanr.h"   

#include "anr.h"    

#include "nar.h"    

#include "ar.h"     

#include <stdio.h>  

int main()
{
    funkcija_bez_argumentiem_bez_return();

    printf("\n");

    funkcija_ar_argumentiem_bez_return(63, "melna teja\n");

    printf("Kvadrata ar malu a = 2 un b = 10 laukums ir = %d \n", funkcija_bez_argumentiem_ar_return());

    printf("Cilindra tilpums ir V = %.2f", funkcija_ar_argumentiem_ar_return(2, 4));
    return 0;   
}
