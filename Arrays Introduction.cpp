//Link --> https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    cin>>a;

    int array_n[a];

    for(int i = 1; i <= a; i++)
    {
        int new_number;
        cin>>new_number;

        array_n[i] = new_number;
    }

    for(int j = a; j >= 1; j--)
    {
        cout<<array_n[j]<<" ";
    }
    return 0;
}
