#include<stdio.h>

float interpolation(float f[][n], int n; float r){
    
}

int main(){
    int n;
    int i,j;
    float f[i][j];
    
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    
    float x[n]; y[n],a;
    printf("\nEnter the values in form x,y : ");
    for(int i=0;i<n;i++){
        scanf("%f %f",&x[i],y[i]);
        f[0][i]=y[i];
    }
    printf("\nEnter the value of x for which value of y is required");
    scanf("%f",&a);
    int h = x[1]-x[0];
    for(int i=0; i<n; i++){
        if(a>x[i]){
            x0 = x[i]-h;
            break;
        }
    }
    r = (a-x0)/(h);

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            f[i][j] = f[i-1][j+1] - f[i-0][j];
        }
    }
    i=n;
    interpolation( f, n, r);
}
