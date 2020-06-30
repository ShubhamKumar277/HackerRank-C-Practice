//Link --> https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, num_of_querry;
    cin>>n;
    cin>>num_of_querry;

    vector<int> a[n];

    for(int i = 0; i<n;i++)
    {
        int inner_array_size;
        cin>>inner_array_size;

        //int in_array[array_size];

        for(int j =0; j<inner_array_size; j++)
        {
            int take_in;
            cin>>take_in;

            a[i].push_back(take_in); //this is how we insert in a vector
        }
    }

    for(int k = 0; k < num_of_querry; k++)
    {
        int q,r;
        cin>>q>>r;

        cout<<a[q][r]<<'\n';
    }

    return 0;
}
