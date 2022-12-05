#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch = '1';
    cout << ch;
    ch = '3';
    cout << ch;
    char ch2 = '1';
    cout <<endl<< char(ch+ch2);
    string st = "qwe";
    cout << endl<<st;
    st +="asdfas";
    st = "a";
    cout << endl<<st;
}
