#include <iostream>

using namespace std;

float sr_ar(float n1, float n2, float n3, float n4){
    float res;
    res = (n1+n2+n3+n4)/4;
    return res;
}

int main(int argc, char const *argv[])
{
    float x1,x2,x3,x4;
    cin >> x1>>x2>>x3>>x4;
    float res;
    res = sr_ar(x1,x2,x3,x4);
    cout << "Sr_ar = " << res;
    int r = rand()%100+1;
}
