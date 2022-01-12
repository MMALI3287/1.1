#include<stdio.h>
void printTable(int *multable, int num, int n){
    int i;
    for(i=0;i<n;i++)
    multable[i]=num*(i+1);
    for(i=0;i<n;i++)
    printf("%dX%d=%d\n",num,i+1,multable[i]);

}
int main(){
    int multable[3];
    printTable(multable,2,10);
    return 0;
}