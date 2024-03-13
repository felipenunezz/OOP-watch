#pragma once
#include <string>
#include <iostream>

enum Status { SUCCESS, ERROR, WARNING };

class CTime {
    int _hours;
    int _minutes;
    int _seconds;
public:
    CTime();                                      // конструктор по умолчанию
    CTime(int hours, int minutes, int seconds);   // конструктор инициализации
    CTime(const CTime& time);                     // конструктор копирования
    CTime(std::string time);                      // конструктор преобразования

    Status check();
    Status convert();

    Status add_hours(int hours);
    Status add_minutes(int minutes);
    Status add_seconds(int seconds);
    CTime& add(const CTime& time);

    Status assign(const CTime& time);
    int compare(const CTime& time);

    Status input();
    Status output();
};
