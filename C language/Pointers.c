#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    // Complete this function   
    *a += *b;
    *b = *a - 2*(*b);
    if(*b<0)
        *b = *b*(-1);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

