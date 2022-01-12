#include<stdio.h>

void main() {

    
        printf("Input the number");
        int a;
        scanf("%d",&a);
        int i,j=0;
        while(a!=0)
        {
            j=a%10;
            j=j*10+j;
            a=a/10;
        }
        printf("%d\n",j);
        while(j!=0)
        {
            i=j%10;        
            printf("%d\n",i);
            j=j/10;
        }
    }

}