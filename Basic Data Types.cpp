//Link --> https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() 
{
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf\n", a, b, c, d, e);
    return 0;
}
