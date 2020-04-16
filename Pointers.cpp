#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int z=*a;
    *a=*a+*b;
    *b=*b-z;
    if(*b>0){}else{*b=(-*b);};

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

