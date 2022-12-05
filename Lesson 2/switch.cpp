#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 0;
    while (true){
        cin >> num;
        switch (num)
        {
        case 0:
            cout << "Ноль";
            break;
        case 1:
            cout << "Один";
            break;
        case 2:
            cout << "Два";
            break;
        case 3:
            cout << "Три";
            break;
        case 4:
            cout << "Четыре";
            break;
        
        default:
            cout << "Такой цифры нет";
        }
        if (num==666){
            break;
        }
    }
}
