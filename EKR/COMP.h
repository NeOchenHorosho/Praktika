#ifndef COMP_H
#define COMP_H
#include <QVector>
#include <QString>
#include <QTextStream>
#include <QDataStream>


struct Comp
{
    QString name;
    QString section;
    int price;

    Comp(): name("none"), section("none"), price(0){}
    Comp(const Comp& source): name(source.name), section(source.section), price(source.price){}
    Comp& operator=(const Comp& rv)
    {
        if(rv == *this) return *this;
        name = rv.name;
        section = rv.section;
        price = rv.price;
        return *this;
    }
    bool operator==(const Comp& rv) const
    {
        if(name == rv.name)
        {
            return true;
        }
        return false;
    }
    bool operator > (const Comp& rv) const
    {
        return name > rv.name;
    }

    bool operator < (const Comp& rv) const
    {
        return name < rv.name;
    }

    friend QTextStream& operator<<(QTextStream& out, const Comp& obj) {
        out << obj.name << ':' << obj.section << ':' << obj.price<< '\n';
        return out;
    }

    friend QTextStream& operator>>(QTextStream& in, Comp& obj) {
        QString line = in.readLine();
        QStringList parts = line.split(':');
        obj.name = parts[0];
        obj.section = parts[1];
        obj.price = parts[2].toInt();
        return in;
    }

};

struct Bag
{
    QString name;
    QString section;
    int ammount;
    Bag(): name("none"), section ("none"), ammount(0){}
    Bag(const Bag& source): name(source.name), section(source.section), ammount(source.ammount){}
    Bag& operator=(const Bag& rv)
    {
        if(*this == rv) return *this;
        name = rv.name;
        section = rv.section;
        ammount = rv.ammount;
        return *this;
    }

    bool operator==(const Bag& rv) const
    {
        if(name == rv.name)
        {
            return true;
        }
        return false;
    }
    bool operator > (const Bag& rv) const
    {
        return name > rv.name;
    }

    bool operator < (const Bag& rv) const
    {
        return name < rv.name;
    }

    friend QTextStream& operator<<(QTextStream& out, const Bag& obj) {
        out << obj.name << ':' << obj.section << ':' << obj.ammount << '\n';
        return out;
    }

    friend QTextStream& operator>>(QTextStream& in, Bag& obj) {
        QString line = in.readLine();
        QStringList parts = line.split(':');
        obj.name = parts[0];
        obj.section = parts[1];
        obj.ammount = parts[2].toInt();
        return in;
    }

};

template<class T>
class COMP final
{
private:
    QString title;
    QVector<T> vect;
public:
    COMP(): vect(){}
    COMP(const COMP& source): vect(source.vect), title(source.title){}
    COMP(const COMP&& source): vect(std::move(source.vect)), title(std::move(source.title)){}
    ~COMP() = default;
    COMP& operator=(const COMP& rv)
    {
        vect = rv.vect;
        title = rv.title;
        return *this;
    }
    COMP& operator=(COMP&& rv)
    {
        vect = std::move(rv.vect);
        title = std::move(rv.title);
        return *this;
    }

    T& operator[] (size_t i)
    {
        if( i >= vect.size()) throw std::out_of_range(std::to_string(i));
        return vect[i];
    }

    size_t GetCount()
    {
        return vect.size();
    }
    QString GetTitle()
    {
        return title;
    }
    void sort()
    {
        std::sort(vect.begin(), vect.end());
    }

    void Dsort()
    {
        std::sort(vect.begin(), vect.end(), std::greater<T>());
    }

    friend QTextStream& operator<<(QTextStream& out, const COMP& obj)
    {
        out << obj.title << "\n";
        for (size_t var = 0; var < obj.vect.size(); ++var) {
            out << obj.vect.at(var) << "\n";
        }
        return out;
    }
    friend QTextStream& operator>>(QTextStream& in, COMP& obj) {
        size_t i = 0;
        T temp;
        obj.vect.clear();
        obj.title = in.readLine();
        while (!in.atEnd())
        {
            in >> temp;
            obj.vect.append(temp);
        }
        obj.sort();
        return in;
    }

    friend COMP<T> operator+ (COMP<T> larg, COMP<T> rarg)
    {
        COMP<T> res;
        res.title = larg.title + " и " + rarg.title;
        res.vect.reserve(larg.vect.size() + rarg.vect.size());
        larg.sort();
        rarg.sort();

        size_t r_index, l_index;
        r_index=l_index=0;

        while(l_index < larg.GetCount() && r_index < rarg.GetCount())
        {
            if(larg[l_index] < rarg[r_index])
            {
                res.vect.append(larg[l_index++]);
            }
            else if (larg[l_index] > rarg[r_index])
            {
                res.vect.append(rarg[r_index++]);
            }
            else
            {
                res.vect.append(larg[l_index++]);
                r_index++;
            }
        }

        while(l_index < larg.GetCount())
        {
            res.vect.append(larg[l_index]);
            l_index++;
        }

        while(r_index < rarg.GetCount())
        {
            res.vect.append(rarg[r_index]);
            r_index++;
        }
        return res;
    }

    T find_product(QString prod_name)
    {
        //линейный пойск эффективнее, поскольку мы не можем знать, отсортирован ли массив

        for (int var = 0; var < vect.size(); ++var)
        {
            if(vect[var].name == prod_name) return vect[var];
        }
        return T();
    }
};

#endif
