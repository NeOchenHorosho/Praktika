#include <QtTest>

// add necessary includes here
#include "../numbersi/numchici.h"
class haha : public QObject
{
    Q_OBJECT

public:
    haha();
    ~haha();

private slots:
    void test_NOD_data();
    void test_NOD();
    void test_IsPrime();
    //void test_count();
};

haha::haha() {}

haha::~haha() {}

void haha::test_NOD_data()
{
    QTest::addColumn<int>("first");
    QTest::addColumn<int>("second");
    QTest::addColumn<int>("result");

    QTest::newRow("NOD_data_1") << 8 << 4 << 4;
    QTest::newRow("NOD_data_2") << 12 << 30 << 6;
    QTest::newRow("NOD_data_3") << 24 << 42 << 6;
    QTest::newRow("NOD_data_4") << 20 << 17 << 1;
    QTest::newRow("NOD_data_5") << 1 << 1 << 1;
    QTest::newRow("NOD_data_6") << 4 << 8 << 4;
}

void haha::test_NOD()
{
    Numbers a(12);
    QFETCH(int, first);
    QFETCH(int, second);
    QFETCH(int, result);


    QCOMPARE(Numbers(first).NOD(Numbers(second)), result);
    // QCOMPARE(a.NOD(Numbers(12)), 12);
    // QCOMPARE(Numbers(30).NOD(Numbers(45)), 15);
}

void haha::test_IsPrime()
{
    QVERIFY(!Numbers(4).IsPrime());
    QVERIFY(Numbers(13).IsPrime());
    QVERIFY(!Numbers(14).IsPrime());
    QVERIFY(Numbers(97).IsPrime());
}

QTEST_APPLESS_MAIN(haha)

#include "tst_haha.moc"
