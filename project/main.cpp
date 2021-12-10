#include <iostream>
#include <ctime>
#include <string>
#include <stdlib.h>
using namespace std;

class Date
{
    public:
        int day;
        int month;
        int year;
};

bool leapYear(int year)
{
    if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}
bool validateYear(int year)
{
    if (year == 1921 || (year >= 1921 && year <= 2121)) {
        return true;
    }
    else {
        cout << "Error 1 (Incorrect year value was written)" << endl;
        exit(0) ;
    }
}

bool validateMonth(int month)
{
    if (month >= 1 && month <= 12) {
        return true;
    }
    else {
        cout << "Error 2 (Incorrect month value was written)" << endl;
        exit(0) ;
    }
}

bool validateDay(int day, int month, int year)
{
    switch (month)
    {
    case 1:
        if (day >= 1 && day <= 31) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
        }
        break;
    case 2:
        if (leapYear(year)) {
            if (day >= 1 && day <= 29) {
                return true;
            }
            else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
                 }
        }
        else {
            if (day >= 1 && day <= 28) {
                return true;
            }
            else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
                 }
            return false;
        }
        break;
    case 3:
        if (day >= 1 && day <= 31) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 4:
        if (day >= 1 && day <= 30) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 5:
        if (day >= 1 && day <= 31) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 6:
        if (day >= 1 && day <= 30) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 7:
        if (day >= 1 && day <= 31) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 8:
        if (day >= 1 && day <= 31) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 9:
        if (day >= 1 && day <= 30) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 10:
        if (day >= 1 && day <= 31) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 11:
        if (day >= 1 && day <= 30) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    case 12:
        if (day >= 1 && day <= 31) {
            return true;
        }
        else {
            cout << "Error 3 (Incorrect day value was written)" << endl;
            exit(0);
             }
        break;
    }
}

bool validateDate(int day, int month, int year)
{
    if (validateYear(year) == true && validateMonth(month) == true && validateDay(day, month, year) == true) {
        return true;
    }
    else {
        return false;
    }
}

void output(int day, int month, int year)
{
    cout << year << "." << month << "." << day << endl;
    switch (month)
    {
    case 1:
        cout << day << " " << "January" << " " << year << endl;
        break;
    case 2:
        cout << day << " " << "February" << " " << year << endl;
        break;
    case 3:
        cout << day << " " << "March" << " " << year << endl;
        break;
    case 4:
        cout << day << " " << "April" << " " << year << endl;
        break;
    case 5:
        cout << day << " " << "May" << " " << year << endl;
        break;
    case 6:
        cout << day << " " << "June" << " " << year << endl;
        break;
    case 7:
        cout << day << " " << "July" << " " << year << endl;
        break;
    case 8:
        cout << day << " " << "August" << " " << year << endl;
        break;
    case 9:
        cout << day << " " << "September" << " " << year << endl;
        break;
    case 10:
        cout << day << " " << "October" << " " << year << endl;
        break;
    case 11:
        cout << day << " " << "November" << " " << year << endl;
        break;
    case 12:
        cout << day << " " << "December" << " " << year << endl;
        break;

    }

}

int PreviosNext(int day,int month,int year)
{
    int previousDay = day,previousMonth = month,previousYear = year;
    int nextDay = day, nextMonth = month,nextYear = year;
    if (previousDay == 1) {
        if (previousMonth == 1)
        {
            previousYear -= 1;
            previousMonth = 12;
        }
        else {
            previousMonth -= 1;
        }

        for (int i = 31; i > 0; i--)
        {
            if (validateDay(i, previousMonth, previousYear))
            {
                previousDay = i;
                break;
            }
        }
    }
    else {
        previousDay -= 1;
    }
    cout << previousDay << "." << previousMonth << "." << previousYear << endl;
    if (nextDay == 31 && (nextMonth == 12 || nextMonth == 10 || nextMonth == 8 || nextMonth == 7|| nextMonth == 5 || nextMonth == 3 || nextMonth == 1))
    {
        if (month == 12)
        {
            nextYear += 1;
            nextMonth = 1;
        }
        else {
            nextMonth += 1;
        }
        nextDay = 1;
    }
    else if (nextDay == 30 && (nextMonth == 11 || nextMonth == 9 || nextMonth == 6 || nextMonth == 4))
    {
        nextMonth += 1;
        nextDay = 1;
    }
    else if (nextDay == 28 || nextDay == 29 && (nextMonth == 2))
    {
        if ((nextDay == 29 && (year % 4 == 0))|| nextDay == 28 && (year % 4 != 0))
        {
            nextMonth += 1;
            nextDay = 1;
        }
        else if (nextDay == 28 && (year % 4 == 0))
        {
            nextMonth = 2;
            nextDay += 1;
        }
    }
    else {
        nextDay += 1;
    }
    cout << nextDay << "." << nextMonth << "." << nextYear << endl;
    return 0;
}
int AnotherDate(int year, int day, int month)
{
    int AnotherDay = day, AnotherMonth = month, AnotherYear = year;
}

int EarlierDate(int AnotherDay, int AnotherMonth, int AnotherYear, int day, int month, int year)
{
    if (AnotherYear > year){
        cout << "The first date is earlier" << endl;
    }
    else if(AnotherYear < year){
        cout << "The second date is earlier" << endl;
    }
    else if(AnotherYear = year && AnotherMonth > month){
        cout << "The first date is earlier" << endl;
    }
    else if(AnotherYear = year && AnotherMonth < month){
        cout << "The second date is earlier" << endl;
    }
    else if(AnotherYear = year && AnotherMonth == month && AnotherDay > day){
        cout << "The first date is earlier" << endl;
    }
    else if(AnotherYear = year && AnotherMonth == month && AnotherDay < day){
        cout << "The second date is earlier" << endl;
    }
    else if(AnotherYear = year && AnotherMonth == month && AnotherDay == day){
        cout << "The first date is look like a second date" << endl;
    }
}

int YearCode1(int year)
{
    int YearCode(year);
    YearCode = ((year%100)/12) + ((year%100)%12) + (((year%100)%12)/4);
    cout << YearCode << endl;
}

int MonthCode1(int month)
{
    int MonthCode(month);
    if (month == 1 )
    {
       MonthCode = 6;
    }
    else if (month == 2)
    {
       MonthCode = 2;
    }
    else if (month == 3)
    {
       int MonthCode = 2;
    }
    else if (month == 4)
    {
       MonthCode = 5;
    }
    else if (month == 5)
    {
       MonthCode = 0;
    }
    else if (month == 6)
    {
       MonthCode = 3;
    }
    else if (month == 7)
    {
       MonthCode = 5;
    }
    else if (month == 8)
    {
        MonthCode = 1;
    }
    else if (month == 9)
    {
        MonthCode = 4;
    }
    else if (month == 10)
    {
        MonthCode = 6;
    }
    else if (month == 11)
    {
        MonthCode = 2;
    }
    else if (month == 12)
    {
        MonthCode = 4;
    }
    cout << MonthCode << endl;
}

int WeekDay(int day, int year, int month, int MonthCode, int YearCode)
{
    int WeekDay;
    if (year >= 1921 && year <= 1999){
        WeekDay = ((day + MonthCode + YearCode)%7)+1;
    }
    else if (year >= 1921 && year <= 1999 && (year%100 != 0) && month == 1 || month == 2){
        WeekDay = (day + MonthCode + YearCode)%7;
    }
    else if (year >= 2000 && year <= 2121 && (year%100 != 0)  && month == 1 || month == 2){
        WeekDay = ((day + MonthCode + YearCode)%7)-1;
    }
    else if (year >= 2000 && year <= 2121){
        WeekDay = (day + MonthCode + YearCode)%7;
    }

    if(WeekDay == 1){
        cout << "The day is Monday" << endl;
    }
    else if(WeekDay == 2){
        cout << "The day is Tuesday" << endl;
    }
    else if(WeekDay == 3){
        cout << "The day is Wednesday" << endl;
    }
    else if(WeekDay == 4){
        cout << "The day is Thursday" << endl;
    }
    else if(WeekDay == 5){
        cout << "The day is Friday" << endl;
    }
    else if(WeekDay == 6){
        cout << "The day is Saturday" << endl;
    }
    else if(WeekDay == 7){
        cout << "The day is Sunday" << endl;
    }
}

int AnAnotherDate(int day, int year, int month)
{
    int ThirdDay = day, ThirdMonth = month, ThirdYear = year;
}

int DaysInYear(int day, int year)
{
     int DaysInYear;
     if (year%100 == 0){
        DaysInYear = 365;
     }
     else if (year%100 != 0){
        DaysInYear = 366;
     }
}

class Time
{
    public:
       int second;
       int minute;
       int hours;
       int t_date;
};

int main()
{

    int day, month, year, AnotherDay, AnotherMonth, AnotherYear, YearCode, MonthCode, ThirdDay, ThirdMonth, ThirdYear;
    cout << "Year:";
    cin >> year;
    cout << "Month:";
    cin >> month;
    cout << "Day:";
    cin >> day;
    validateDate(day, month, year);
    cout << endl;
    output(day, month, year);
    PreviosNext(day, month, year);
    cout << endl;
    cout << "Another year: ";
    cin >> AnotherYear;
    cout << "Another month: ";
    cin >> AnotherMonth;
    cout << "Another day: ";
    cin >> AnotherDay;
    validateDate(AnotherDay, AnotherMonth, AnotherYear);
    cout << AnotherDay << "." << AnotherMonth << "." << AnotherYear << endl;
    cout << endl;
    EarlierDate(AnotherDay, AnotherMonth, AnotherYear, day, month, year);
    cout << endl;
    WeekDay(day, year, month, YearCode, MonthCode);
    cout << endl;
    cout << "Enter the third year: ";
    cin >> ThirdYear;
    cout << "Enter the third month: ";
    cin >> ThirdMonth;
    cout << "Enter the third day: ";
    cin >> ThirdDay;
    validateDate(ThirdDay, ThirdMonth, ThirdYear);
    cout << ThirdYear << "." << ThirdMonth << "." << ThirdDay << endl;
}
