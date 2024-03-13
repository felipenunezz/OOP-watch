#include "ctime.hpp"

CTime::CTime() {
    this->_hours = 0;
    this->_minutes = 0;
    this->_seconds = 0;
}

CTime::CTime(int hours, int minutes, int seconds) {
    Status state;

    this->_hours = hours;
    this->_minutes = minutes;
    this->_seconds = seconds;

    state = this->check();
}

Status CTime::check() {
    /* TBD */
    return SUCCESS;
}

Status CTime::assign(const CTime &time) {
    Status state;

    if (this == nullptr) {
        state = ERROR;
    } else {
        this->_hours = time._hours;
        this->_minutes = time._minutes;
        this->_seconds = time._seconds;

        state = this->check();
    }
    
    return state;
}

Status CTime::input() {
    Status state;

    char colon;
    std::cin >> this->_hours >> colon
        >> this->_minutes >> colon
        >> this->_seconds;

    state = this->check();

    return state;
}

Status CTime::output() {
    Status state = SUCCESS;

    if (this == nullptr) {
        state = ERROR;
    }
    else {
        std::cout << this->_hours << ":"
            << this->_minutes << ":"
            << this->_seconds;
    }

    return state;
}
