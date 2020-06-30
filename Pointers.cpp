//Link --> https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a,int *b)
{
    // here 'a' is an address and *a-------->an integer (same for b)
    
    int c = *a + *b;
    int d = abs(*a - *b);

    *a = c;
    *b = d;

}
