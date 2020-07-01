//Link --> https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string first;
    string second;

    cin>>first>>second;

    cout<<first.size()<<" "<<second.size()<<'\n';

    string ans2 = first+second;
    cout<<ans2<<'\n';

    string ans4 = first[0]+second.substr(1,-1);
    string ans3 = second[0]+first.substr(1,-1);

    cout<<ans3<<" "<<ans4;


  
    return 0;
}
