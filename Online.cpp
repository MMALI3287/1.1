#include<stdio.h>
#include<string.h>
int sort1(int *ptr,int len, int val)
{
    for(int i=0; i<=len-1; i++)
    {
        printf("%d\n",*(ptr+i));
        if(val>*(ptr+i)&&val<*(ptr+1+i))
        {
            printf("%d\n",val);
            *ptr+i+1=val;
        }
    }
}
void print(int *ptr, int len)
{
    int i;
    for(i=0; i<=len-1; i++)
    {
        printf("%d,%d\n",ptr+i,*(ptr+i));
    }
}
int main()
{
    int i;
    int a[6];
    for(i=0; i<5; i++)
    {
        printf("Input %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    sort1(a,6,7);
    printf("\n");
    print(a,5);
    return 0;
}
