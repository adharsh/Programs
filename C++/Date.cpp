#include "Date.hpp"

Date::Date(int month, int day, int year){
	setDate(month, day, year);
}

void Date::setDate(int month, int day, int year){
	this->month = month;
	this->day = day;
	this->year = year;
}

int Date::getMonth(){ return month; }
int Date::getDay(){ return day; }
int Date::getYear(){ return year; }