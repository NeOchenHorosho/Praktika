QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase moc
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += ../numbersi/numchici.h
SOURCES +=  tst_haha.cpp ../numbersi/numchici.cpp
