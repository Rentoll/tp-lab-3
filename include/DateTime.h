#ifndef DATETIME_H
#define DATETIME_H

#include <ctime>
#include <string>

class DateTime {
private:
    tm date;
    std::string months[12] = {"January", "February", "March", "April", "May",
                              "June", "July", "August", "September", "October", "November", "December"};
    std::string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
public:
    DateTime(int, int, int);
    DateTime();
    DateTime(const DateTime&);
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(int);
    std::string getPast(int);
    int getDifference(DateTime&);
};
#endif //TASK1_DATETIME_H