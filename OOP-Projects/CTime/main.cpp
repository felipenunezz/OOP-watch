#include <iostream>
#include "ctime.hpp"

int main() {
    CTime time0 = { 11, 12, 57 };
    CTime time1;
    CTime time2(12, 13, 14);
    //CTime time3(time2);
    //CTime time4("13:45:23");

    std::cout << "Check create objects" << std::endl;

    std::cout << "Time 0 (after default constructor + \"operator =\"  + initialization): ";
    time0.output();
    std::cout << std::endl;
    std::cout << "Time 1 (after default constructor): ";
    time1.output();
    std::cout << std::endl;
    std::cout << "Time 2 (after init constructor): ";
    time2.output();
    std::cout << std::endl;

    std::cout << "Check \"input\" function" << std::endl;
    time1.input();
    std::cout << "Time 1 (after \"input\"): ";
    time1.output();
    std::cout << std::endl;

    std::cout << "Check \"assign\" function, i.e. time2 = time0" << std::endl;
    time2.assign(time0);
    std::cout << "Time 0: ";
    time0.output();
    std::cout << std::endl;
    std::cout << "Time 2: ";
    time2.output();
    std::cout << std::endl;

    system("pause");
    return 0;
}
