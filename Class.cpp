//Link --> https://www.hackerrank.com/challenges/c-tutorial-class/problem

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
    int age;
    string first_name;
    string last_name;
    int standard;

    public:
    void set_age(int age_in);
    void set_first_name(string first_name_in);
    void set_last_name(string last_name_in);
    void set_standard(int standard_in);

    int get_age();
    string get_first_name();
    string get_last_name();
    int get_standard();
    string to_string();
};

void Student::set_age(int age_in)
{
    age = age_in;
}

void Student::set_first_name(string first_name_in)
{
    first_name = first_name_in;
}

void Student::set_last_name(string last_name_in)
{
    last_name = last_name_in;
}

void Student::set_standard(int standard_in)
{
    standard = standard_in;
}

int Student::get_age()
{
    return age;
}

string Student::get_first_name()
{
    return first_name;
}

string Student::get_last_name()
{
    return last_name;
}

int Student::get_standard()
{
    return standard;
}

string Student::to_string()
{
    stringstream out;
    out<<age<<","<<first_name<<","<<last_name<<","<<standard;
    return out.str();
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
