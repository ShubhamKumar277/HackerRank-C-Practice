//Link --> https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int maximum = a;
    int arrayoffour[4] = {a,b,c,d};

    for(int i=1; i<=4; i++)
    {
        if(maximum < arrayoffour[i])
        {
            maximum = arrayoffour[i];
        }
    }

    return maximum;
}
