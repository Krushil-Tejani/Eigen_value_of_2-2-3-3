#include <stdio.h>
#include <math.h>

int main() {
int y[2][2],i,j,x[3][3],eq,s1,s2,da,e1,k,l,m,a,b,c,d,n;
float p,q,r,s,r1,r2,e2,e3;

printf("This is program to calculate eigen values of 2*2 or 3*3 matrix\n");
printf("Enter '2' for 2*2 and '3' for 3*3:\t");
scanf("%d",&n);

switch(n)
{
    case 2:
        printf("Enter the Integer values for 2*2 matrix A\n");
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
            scanf("%d",&y[i][j]);
            }
        printf("\n");
        }
        p=1.0;
        q=-(y[0][0] + y[1][1]);
        r=(y[0][0] * y[1][1]) - (y[0][1] * y[1][0]);
        s=q*q-4*p*r;

        if(s>0){
            r1=(-q+sqrt(s))/(2*p);
            r2=(-q-sqrt(s))/(2*p);
            printf("%0.2f and %0.2f are the Eigen values of the matrix",r1,r2);
        }
        else if(s==0){
            r1=-q/(2*p);
           r2=-q/(2*p);
            printf("%f and %f are the Eigen values of the matrix",r1,r2);
        }
        else{
            printf("Imaginary value of eigen value");
            }
    break;

    case 3:
        printf("Enter the Integer values for 3*3 matrix A\n");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                scanf("%d",&x[i][j]);
            }
        printf("\n");
        }
        s1=x[0][0]+x[1][1]+x[2][2];
        s2=((x[1][1]*x[2][2]) - (x[2][1]*x[1][2])) + ((x[0][0]*x[2][2]) - (x[0][2]*x[2][0])) + ((x[0][0]*x[1][1]) - (x[1][0]*x[0][1]));
        da=x[0][0]*((x[1][1]*x[2][2]) - (x[2][1]*x[1][2])) - x[0][1]*((x[1][0]*x[2][2]) - (x[1][2]*x[2][0])) + x[0][2]*((x[1][0]*x[2][1]) - (x[2][0]*x[1][1]));

        for(i=-4; i<5; i++){
            if((eq=(i*i*i) - (s1*i*i) + (s2*i) -da) ==0){
                e1=i;
            }
        }

        k=e1-s1;
        l=(k*e1)+s2;
        m=(l*e1)-da;

        a=1;
        b=k;
        c=l;
        d=b*b-4*a*c;

        if(d>0){
            e2=(-b+sqrt(d))/(2*a);
            e3=(-b-sqrt(d))/(2*a);
            printf("%d, %0.2f and %0.2f are the Eigen values of the matrix",e1,e2,e3);
        }
        else if(d==0){
            e2=-b/(2*a);
            e3=-b/(2*a);
            printf("%d, %0.2f and %0.2f are the Eigen values of the matrix",e1,e2,e3);
        }
        else{
            printf("Imaginary value of eigen value");
        }
    break;

    default:
        printf("Invalid choice");
} 

return 0;
}   