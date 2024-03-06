#include <iostream>

using namespace std;


int A, B, C, D, X, Y;


void square(int &Y);
int sum(int X, int Y);


void T(int &P, int &L)
{
    cout << "P ^ 2 = " << P << " ^ 2 = ";
    X = P;
    square(P);
    cout << P << endl;

    cout << "L ^ 2 = " << L << " ^ 2 = ";
    X = L;
    square(L);
    cout << L << endl;

    cout << "P ^ 2 + L ^ 2 = " << P << " + " << L << " = ";
    P = sum(P, L);
    cout << P << endl;

    cout << "(P ^ 2 + L ^ 2) ^ 2 = " << P << " ^ 2 = ";
    X = P;
    square(P);
    cout << P << endl;
}


int main()
{
    cout << "Enter A, B, C, D: ";
    cin >> A >> B >> C >> D;

    cout << "(A ^ 2 + B ^ 2) ^ 2 + (C ^ 2 + D ^ 2) ^ 2:\n";

    cout << "P = A = " << A << "\nL = B = " << B << endl;
    T(A, B);

    cout << "P = C = " << C << "\nL = D = " << D << endl;
    T(C, D);

    cout << "(A ^ 2 + B ^ 2) ^ 2 + (C ^ 2 + D ^ 2) ^ 2 = ";
    cout << A << " + " << C << " = ";
    A = sum(A, C);
    cout << A << endl;

    cout << "F = " << A << endl;

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
