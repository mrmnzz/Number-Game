

// 2. BISECTION METHOD

#include<stdio.h>

void bisection(float *x, float a, float b, int *itr){
        *x=(a+b)/2;
        printf("\nInteration: %d\tx=%f",*itr,*x);
        (*itr)++;
}

float f(float x){
        return ((x*x*x)-(5*x)+1);
}

int main(){
        float x,a,b,err;
        int itr=1,mitr;
        printf("\nEnter the value of a and b and maximum iteration allowed\n");
        scanf("%f %f %f %d",&a,&b,&err,&mitr);
        bisection(&x,a,b,&itr);
        while(itr<=mitr){
                if(f(a)*f(x)<0)
                b=x;
                else
                a=x;
                bisection(&x,a,b,&itr);
                if(fabs(a-x)<err){
                        printf("\nThe value of x = %.3f\n",x);
                        return 0;
                }
        }
        printf("\nThe value of x cannot be retrieved with this number of itteration\n");
        return 1;
}

/*==========================================================================================================

OUTPUT::

[be1571@radix numericalAnalysis]$ ./a.out 

Enter the value of a and b and maximum iteration allowed
0 1 0.005 20

Interation: 1   x=0.500000
Interation: 2   x=0.250000
Interation: 3   x=0.125000
Interation: 4   x=0.187500
Interation: 5   x=0.218750
Interation: 6   x=0.203125
Interation: 7   x=0.195312
Interation: 8   x=0.199219
The value of x = 0.199


[be1571@radix numericalAnalysis]$ ./a.out 

Enter the value of a and b and maximum iteration allowed
0 1 0.0005 5

Interation: 1   x=0.500000
Interation: 2   x=0.250000
Interation: 3   x=0.125000
Interation: 4   x=0.187500
Interation: 5   x=0.218750
The value of x cannot be retrieved with this number of itteration*/
