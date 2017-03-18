#include<stdio.h>

#define MAX 20

int main(){
        float x[MAX],y[MAX],val,s,d,h,p;
        int j,i,k,n;

        printf("Enter the number of elements :");
        scanf("%d",&n);

        printf("\nEnter the values in form x,y:\n");
        for (i=1;i<=n;i++)
                scanf("%f %f",&x[i],&y[i]);

        h=x[2]-x[1];

        printf("Enter the searching point val:");
        scanf("%f",&val);

        s=(val-x[n])/h;
        d=y[n];
        p=1;

        for(i=n, k=1; i>=1 ,k<n; i--,k++){

                for(j=n; j>=1; j--)
                        y[j]=y[j]-y[j-1];

                p=p*(s+k-1)/k;
                d=d+p*y[n];
        }

        printf("When x = %g ,corresponding value of y = %g \n\n",val,d);
}

/**********************************************************************************************
 * 
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
 * Enter the searching point val:7.5
 * When x = 7.5 ,corresponding value of y = 421.875
 *
 *******************************************************************************************/
