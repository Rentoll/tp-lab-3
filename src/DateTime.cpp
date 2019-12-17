#include "DateTime.h"

DateTime::DateTime(int day, int month, int year) {
    time_t now = time(NULL);
	date = *localtime(&now);
	date.tm_mday = day;
	date.tm_mon = month - 1;
	date.tm_year = year - 1900;
}

DateTime::DateTime() {
    time_t now = time(NULL);
	date = *localtime(&now);
	tm now_time = *localtime(&now);
	date.tm_mday = now_time.tm_mday;
	date.tm_mon = now_time.tm_mon;
	date.tm_year = now_time.tm_year;
}

DateTime::DateTime(const DateTime& datetime) {
    date.tm_mday = datetime.date.tm_mday;
	date.tm_mon = datetime.date.tm_mon;
	date.tm_year = datetime.date.tm_year;
}

std::string DateTime::getToday() {
    std::string today = "";

	mktime(&date);
	if (date.tm_mday < 10)
		today += "0";
	today += std::to_string(date.tm_mday) + " " + months[date.tm_mon] + " " + std::to_string(date.tm_year + 1900) + ", " + days[date.tm_wday];
	return today;
}

std::string DateTime::getFuture(int N) {
    std::string future = "";
	tm temp = date;

	temp.tm_mday += N;
	mktime(&temp);

	if (temp.tm_mday < 10)
		future += "0";

	future += std::to_string(temp.tm_mday) + " " + months[temp.tm_mon] + " " + std::to_string(temp.tm_year + 1900) + ", " + days[temp.tm_wday];
	return future;
}

std::string DateTime::getPast(int N) {
    std::string past = "";
	tm temp = date;

	temp.tm_mday -= N;
	mktime(&temp);

	if (temp.tm_mday < 10)
		past += "0";

	past += std::to_string(temp.tm_mday) + " " + months[temp.tm_mon] + " " + std::to_string(temp.tm_year + 1900) + ", " + days[temp.tm_wday];
	return past;
}

std::string DateTime::getTomorrow() {
    return getFuture(1);
}

std::string DateTime::getYesterday() {
    return getPast(1);
}

DateTime::getDifference(DateTime& given_date) {
    return abs(mktime(&date) - mktime(&given_date.date))/(24 * 60 * 60);
}
