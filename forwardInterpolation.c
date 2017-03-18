#include<stdio.h>

#define MAX 20

int main(){

        float x[MAX],y[MAX],f,s,h,d,p;
        int j,i,n;

        printf("Enter the number of elements :");
        scanf("%d",&n);

        printf("\nEnter the values in form x,y:\n");
        for (i=1;i<=n;i++)
        scanf("%f %f",&x[i],&y[i]);

        h=x[2]-x[1];

        printf(" To get corresponding value of y, enter the value of x: ");
        scanf("%f",&f);

        s=(f-x[1])/h;
        p=1;
        d=y[1];

        for(i=1;i<=(n-1);i++){

                for(j=1;j<=(n-i);j++)
                        y[j]=y[j+1]-y[j];

                p=p*(s-i+1)/i;
                d=d+p*y[1];
        }

        printf("When x = %g ,corresponding value of y = %g \n\n",f,d);
}

/********************************************************************************************************************
 * OUTPUT:
 * Enter the number of elements :8
 *
 * Enter the values in form x,y:
 * 1 1
 * 2 8
 * 3 27
 * 4 64
 * 5 125
 * 6 216
 * 7 343
 * 8 512
 *  To get corresponding value of y, enter the value of x: 2.5
 *  When x = 2.5 ,corresponding value of y = 15.625
 *
 * ************************************************************************************************************************/