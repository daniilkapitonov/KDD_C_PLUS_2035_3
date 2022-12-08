#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a=2;
    cout <<&a<<"  "<<*(&a);
    int *ptr = &a;
    cout <<endl<< ptr <<"  "<< *ptr;
    *ptr = 10;
    cout << endl<<a<<" "<<*ptr;

    char s = 'a';
    char q[] = "qwer";
    cout << endl<<q;

    int x=6,z=4;
    float y=4;
    cout << endl<<x/z;

    int m[5];
    // cin >> m[0];
    // cin >> m[1];
    for (int i=0;i<5;i++){
        // cin>>m[i];
        cout << i<<" - "<<m[i]<< endl;
    }
    int matr[3][3] = {{1,2,3}, 
                      {4,5,6},
                      {7,8,9}};
    cout << m[6];

    x=z;cout<<x;
}
