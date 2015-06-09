#ifndef DATE_HPP
#define DATE_HPP

class Date{

private:
	int month;
	int day;
	int year;

	Date();

public:
	Date(int month, int day, int year);

	void setDate(int month, int day, int year);

	int getMonth();
	int getDay();
	int getYear();
};

#endif