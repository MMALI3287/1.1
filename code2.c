#include <stdio.h>

void update(int *a,int *b) {
    int *temp;
    *temp=*a;
    *a=*a+*b;
    if(*temp>*b)
    *b=*temp-*b;
    else if(*temp<*b) {
    *b=*b-*temp;
    }
    else
    *b=0;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}