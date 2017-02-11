//1. Regula falsi

#include<stdio.h>
#include<math.h>

float f(float x){
        return (float)((cos(x)-(x*(exp(x)))));
}

void regulaFalsi(float *x, float a, float b, int *itr){
        *x=(a*f(b)-b*f(a))/(f(b)-f(a));
        printf("\nInteration: %d\tx=%f",*itr,*x);
        (*itr)++;
}

int main(){
        float x,a,b,err;
        int itr=1,mitr;
        printf("\nEnter the value of a and b and maximum iteration allowed\n");
        scanf("%f %f %f %d",&a,&b,&err,&mitr);
        regulaFalsi(&x,a,b,&itr);
        while(itr<=mitr){
                if(f(a)*f(x)<0)
                b=x;
                else
                a=x;
                regulaFalsi(&x,a,b,&itr);
                if(fabs(a-x)<err){
                        printf("\nThe value of x = %.3f\n",x);
                        return 0;
                }
        }
        printf("\nThe value of x cannot be retrieved with this number of itteration\n");
        return 1;
}
/*======================================================================================

OUTPUT::

Enter the value of a and b and maximum iteration allowed 
0 1 0.001 20

Interation: 1   x=0.314665
Interation: 2   x=0.446728
Interation: 3   x=0.494015
Interation: 4   x=0.509946
Interation: 5   x=0.515201
Interation: 6   x=0.516922
Interation: 7   x=0.517485
The value of x = 0.517

>>[be1571@radix numericalAnalysis]$ ./a.out 

Enter the value of a and b and maximum iteration allowed
0 1 0.00001 10

Interation: 1   x=0.314665
Interation: 2   x=0.446728
Interation: 3   x=0.494015
Interation: 4   x=0.509946
Interation: 5   x=0.515201
Interation: 6   x=0.516922
Interation: 7   x=0.517485
Interation: 8   x=0.517668
Interation: 9   x=0.517728
Interation: 10  x=0.517748
The value of x cannot be retrieved with this number of itteration*/
