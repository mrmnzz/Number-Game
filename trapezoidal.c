//TRAPEZOIDAL METHOD

#include<stdio.h>
#include<math.h>

float fn (float x){
        return 1/(1+pow(x,2));
}

main(){
        int i,n;
        float a,b,s=0,y=0,h;

        printf("Enter the no of interval = ");
        scanf("%d",&n);
        printf("Enter the lower limit = ");
        scanf("%f",&a);
        printf("Enter the upper limit = ");
        scanf("%f",&b);

        h=(b-a)/n;
        for(i=1;i<=n-1;i++)
                s=s+ fn(a+i*h);
        y=( fn(a) + fn(b)+ 2*s)*h/2;

        printf("the value of y is=%f\n",y);
}


/********************************************************
 * OUTPUT:
 * Enter the no of interval = 10
 * Enter the lower limit = 0
 * Enter the upper limit = 1
 * the value of y is=0.784982
 ******************************************************/