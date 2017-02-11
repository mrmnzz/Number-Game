//3. NEWTON RAPHSON

#include<stdio.h>

float f(float x){
        return (float)((x*x*x)-(8*x)-4);
}

float f1(float x){
        return (float)((3*x*x)-8);
}

void newtonRaphson(float *x, float *x1, int *itr){
        float a,a1;
        a=*x1;
        *x=*x1-f(a)/f1(a);
        printf("\nInteration: %d\tx=%f",*itr,*x);
        (*itr)++;
}

int main(){
        float x,x1,err;
        int itr=1,mitr;
        printf("\nEnter the first guess, error and  maximum iteration allowed\n");
        scanf("%f %f %d",&x1,&err,&mitr);
        newtonRaphson(&x,&x1,&itr);
        while(itr<=mitr){
                x1=x;
                newtonRaphson(&x,&x1,&itr);
                if(fabs(x1-x)<err){
                        printf("\nThe value of x = %.3f\n",x);
                        return 0;
                }
/*=============================================================================================================================
[be1571@radix numericalAnalysis]$ gcc newtonRaphson.c
[be1571@radix numericalAnalysis]$ ./a.out 

Enter the first guess, error and  maximum iteration allowed
3 0.004 10

Interation: 1   x=3.052632
Interation: 2   x=3.051375
The value of x = 3.051
[be1571@radix numericalAnalysis]$ ./a.out 

Enter the first guess, error and  maximum iteration allowed
4 0.001 10

Interation: 1   x=3.300000
Interation: 2   x=3.075557
Interation: 3   x=3.051638
Interation: 4   x=3.051374
The value of x = 3.051
*/
