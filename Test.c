#include<stdio.h>
void sumavg(float a, float b, float v,float *x, float *y)
{
    *x=a+b+v;
    *y=(a+b+v)/3;
}
void main(){
    float a=1, b=2, v=3,sum,avg;
    sumavg(a,b,v,&sum,&avg);
    printf("%f\n",sum);
    printf("%f",avg);
}