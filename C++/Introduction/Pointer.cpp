#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function    
    int aa = *a + *b;
    int bb = *a - *b;
    *a = aa;
    if( bb < 0)
        *b = -1 * bb;
    else
        *b = bb;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
