#include "numchici.h"



Numbers::Numbers() : a(0) {}

Numbers::Numbers(int A) : a(A) {}

int Numbers::NOD(const Numbers &X)
{
    int a1 = a, b = X.a;
    while (a1 != 0 && b != 0) {
        if (a1 > b) {
            a1 %= b;
        }
        else {
            b %= a1;
        }
    }

    return (a1+b);
}

int Numbers::NOK(const Numbers &X)
{
    int a1 = a, b = X.a, x = a * b;
    while (a1 != 0 && b != 0) {
        if (a1 > b) {
            a1 %= b;
        }
        else {
            b %= a1;
        }
    }

    return x/(a+b);
}

bool Numbers::IsPrime()
{
    for (int i = 2; i <= sqrt(a) + 1; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned int Numbers::count_numb() {
    unsigned int x = a;
    unsigned int res = 0;
    if (x == 0)
    {
        res = 1;
        return res;
    }
    while (x != 0)
    {
        x /= 10;
        res++;
    }
    return res;
}

bool Numbers::is_Armstrong() {
    unsigned int sum = 0, y = a, z = y, k = 1;
    k = count_numb();
    unsigned int ost;
    bool res = false;
    while (y != 0)
    {
        ost = y % 10;
        ost = pow(ost, k);
        sum += ost;
        y /= 10;
    }

    if (sum == z)
        res = true;
    return res;
}

QTextStream& operator>>(QTextStream &in, Numbers &X)
{
    in >> X.a;
    return in;
}

QTextStream& operator<<(QTextStream &out, const Numbers &X)
{
    out << X.a;
    return out;
}

void Numbers::set(int num)
{
    this->a = num;
}
int Numbers::get()
{
    return this->a;
}
