#include <iostream>

using namespace std;


int A, B, C, D, X, Y, Z;


void square(int &Y);
int sum(int X, int Y);


void T(int &P, int &L)
{
    X = P;
    square(P);

    X = L;
    square(L);

    P = sum(P, L);

    X = P;
    square(P);
}


int main()
{
    cout << "Enter A, B, C, D: ";
    cin >> A >> B >> C >> D;

    T(A, B);
    T(C, D);
    Z = sum(A, C);

    cout << "F = " << Z;

    return 0;
}


void square(int &Y)
{
    Y = X * X;
}


int sum(int X, int Y)
{
    return X + Y;
}
