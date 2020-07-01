//Link --> https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str);

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

vector<int> parseInts(string str)
{
    stringstream break_into_numbers(str);//Used for breaking String into Components
    vector<int> output;
    char characters;//Stores Individual Component(here ',' commas from stringstream)
    int numbers;//Stores Individual Components(here numbers)

    while(break_into_numbers >> numbers)
    {
        output.push_back(numbers);//Adding extrected integers to Vector
        break_into_numbers>>characters;//Removing Commas b/w numbers so that while loop /                                       //can continue
    }
    return output;
}
