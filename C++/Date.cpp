#include "Date.h"

Date::Date(int month, int day, int year){
	setDate(month, day, year);
}

void Date::setDate(int month, int day, int year){
	month(month);
	day(day);
	year(year);
}

int Date::getMonth(){ return month; }
int Date::getDay(){ return day; }
int Date::getYear(){ return year; }