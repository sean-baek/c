#include <iostream>

using namespace std;

class Date
{
    int year_;
    int month_;
    int day_;

public:
    void ShowDate();

    Date()
    {
        cout << "기본 생성자 호출!" << endl;
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }

    Date(int year, int month, int day)
    {
        cout << "인자 3개 개인 생성자 호출!" << endl;
        year_ = year;
        month_=  month;
        day_ = day;
    }
};

void Date::ShowDate()
{
    cout << "오늘은 " << year_ << " 년" << month_ << " 월" << day_ << " 일 입니다." << endl;
}

int main(void)
{
    Date day = Date();
    Date day2(2012, 10, 31);

    day.ShowDate();
    day2.ShowDate();
    
    return 0;
}
