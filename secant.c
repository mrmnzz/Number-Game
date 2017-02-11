//4. SECANT METHOD

#include<stdio.h>
#include<math.h>

float f (float x){
	return (float)((x*x*x)-x-1);
}

void secant(float *x, float a, float b, int *itr){
        *x=(a*f(b)-b*f(a))/(f(b)-f(a));
        (*itr)++;
}

int main(){
        float x,a,b,err;
        int itr=0,mitr;
        printf("\nEnter the value of a and b\n");
        scanf("%f %f",&a,&b);
        if(f(a)*f(b)<0){
                printf("\nEnter the error allowed and maximum iteration \n");
                scanf("%f %d",&err,&mitr);
                while(itr<mitr){
                        secant(&x,a,b,&itr);
                        a=b;
                        b=x;
                        if(fabs(a-b)<err){
                                printf("\nThe value of x = %.3f\n",x);
                                return 0;
                        }
                        else
                        printf("\nInteration: %d\tx=%f",itr,x);
                }
                printf("\nThe value of x cannot be retrieved with this number of itteration\n");
                return 1;
        }
        else
        printf("\nInappropriate vallue of a and b\nf(a)*f(b) should be less than zero.\n");
        return 1;
}


/*===================================================================
OUTPUT:
Enter the value of a and b
1.3 1.4
Enter the error allowed and maximum iteration 
0.0001 5
Interation: 1	x=1.323043
Interation: 2	x=1.324606
Interation: 3	x=1.324718
The value of x = 1.325
*/


