#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i;
    scanf("%d",&t);
    scanf("\n");
    for(i=1;i<=t;t++)
    {
        char S[50],x,y;
        int c,v=0;
        gets("S");
        for(c=0;c<=strlen(S);c++)
        {
            if(S[c]=='A'||S[c]=='E'||S[c] == 'I'||S[c]=='O'|S[c]=='U')
                v++;
        }
        for(c=0;c<=strlen(S);c++)
        {
            x=S[c];
            y=x+v;
            S[c]=y;
        }
        printf("%s",S);

    }    
    return 0;
}