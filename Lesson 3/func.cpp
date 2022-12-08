#include <iostream>

using namespace std;

int sm_to_m_kn(int sm){
    cout << "Metr - " << float(sm)/100<< endl;
    cout << "Kilomert - " <<float(sm)/100000;
    return 1234;
}

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    int res = sm_to_m_kn(x);
}
