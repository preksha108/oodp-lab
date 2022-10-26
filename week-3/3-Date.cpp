#include <iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;

    public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void get_date() {
        string month_str;
        switch(month) {
            case 1:
                month_str = "January";
                break;
            case 2:
                month_str = "Feburary";
                break;
            case 3:
                month_str = "March";
                break;
            case 4:
                month_str = "April";
                break;
            case 5:
                month_str = "May";
                break;
            case 6:
                month_str = "June";
                break;
            case 7:
                month_str = "July";
                break;
            case 8:
                month_str = "August";
                break;
            case 9:
                month_str = "September";
                break;
            case 10:
                month_str = "October";
                break;
            case 11:
                month_str = "November";
                break;
            case 12:
                month_str = "December";
                break;
        }

        cout << day << " " << month_str << " " << year;
    }

    void print_date(string date_format) {
        // while (date_format.find("%d") != string::npos)
        //     date_format.replace(date_format.find("%d"), 2, day);
        // while (date_format.find("%m") != string::npos)
        //     date_format.replace(date_format.find("%m"), 2, month);
        // while (date_format.find("%y") != string::npos)
        //     date_format.replace(date_format.find("%y"), 2, year);

        // return date_format;
    }

    void find_next_week_date() {
        int next_day = day;
        int next_month = month;
        int next_year = year;

        if (day + 7 > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
            next_month++;
            next_day = (next_day + 7) - 30;
        } else if (day + 7 > 28 && month == 2) {
            next_month++;
            next_day = (next_day + 7) - 28;
        } else if (day + 7 > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
            next_month++;
            next_day = (next_day + 7) - 31;
        }

        cout << next_day << " " << next_month << " " << next_year;
    }
};

int main() {
    Date date(9, 9, 2022);
    date.get_date();
}