#include <iostream>
#include "DateTime.h"

int main() {
	DateTime d1(17, 12, 2019);
	std::string s = d1.getToday();
	std::cout <<  "Today: " << s << std::endl;
	s = d1.getFuture(5);
	std::cout << "5 days after:" << s << std::endl;
	s = d1.getPast(5);
	std::cout << "5 days before:" << s << std::endl;
	s = d1.getTomorrow();
	std::cout << "Tomorrow: " << s << std::endl;
	s = d1.getYesterday();
	std::cout << "Yesterday: " << s << std::endl; 
	DateTime d2(26, 11, 2019);
	std::cout << "Difference = "<< d1.getDifference(d2) << std::endl;
	return 0;
} 
