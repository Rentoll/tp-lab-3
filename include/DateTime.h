#ifndef DATETIME_H
#define DATETIME_H

#include <ctime>
#include <string>

class DateTime {
private:
    tm date;
    std::string months[12] = {"january", "february", "march", "april", "may",
                              "june", "july", "august", "september", "october", "november", "december"};
    std::string days[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
public:
    DateTime(int day, int month, int year);
    DateTime();
    DateTime(const DateTime& datetime);
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(int N);
    std::string getPast(int N);
    int getDifference(DateTime&);
};
#endif //TASK1_DATETIME_H
