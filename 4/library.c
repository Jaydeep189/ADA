#include <stdio.h>


int factorial_recursion(long int val){
    if (val <= 1){
        return 1;
    }
    else {
        return val * factorial_recursion(val - 1) ;
    }

}
int factorial_iterative(long int val) {
    int fac = 1;
    printf("\n");
    for (int i = val; i > 1; i--)
    {
        fac = fac * i;
    }
    return fac;
}