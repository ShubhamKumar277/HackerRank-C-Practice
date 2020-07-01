//Link --> https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int length;
    cin>>length;

    vector<int> numbers;

    for(int i =0; i < length; i++)
    {
        int input_number;
        cin>>input_number;
        numbers.push_back(input_number);
    }

    sort(numbers.begin(), numbers.end());

    for(int j = 0; j < length; j++)
    {
        cout<<numbers[j]<<" ";
    }
    return 0;
}
