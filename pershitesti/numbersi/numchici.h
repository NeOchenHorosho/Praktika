#ifndef NUMCHICI_H
#define NUMCHICI_H

#include <QString>
#include <QTextStream>
class Numbers
{
    int a;

public:

    Numbers();

    Numbers(int A);

    int NOD(const Numbers& X);

    int NOK(const Numbers& X);

    bool IsPrime();

    unsigned int count_numb();

    bool is_Armstrong();

    void set(int a);
    int get();

    friend QTextStream& operator>> (QTextStream& in, Numbers& X);

    friend QTextStream& operator<< (QTextStream& out, const Numbers& X);

};

#endif // NUMCHICI_H
