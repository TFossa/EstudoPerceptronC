#include <stdio.h>
#define peso1 13
#define peso2 15

int main () {
    int x1,x2;
    int w1 = peso1,w2 = peso2;
    int r1,r2,rt;

    scanf("%d %d", &x1,&x2);

    r1 = x1 * w1;
    r2 = x2 * w2;
    
    rt = (r1 + r2) / (w1 + w2);

    if (rt <= 20) rt = 0; 
    else  rt = 1;
    
    printf("%d\n", rt);

    return 0;
}