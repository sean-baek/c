#include <iostream>

using namespace std;

class Date
{
    int year_;
    int month_;
    int day_;
public:
    Date(int year = 2000, int month = 1, int day = 1)
    {
        year_ = year;
        month_ = month;
        day_ = day;
    }
    void SetDate(int year, int month, int date);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    void ShowDate();
};

int main(void)
{
    Date da;

    da.ShowDate();

    char input;

    cout << "초기 설정 값을 지정하시겠습니까(y/N) : ";
    cin >> input;
    
    switch(input)
    {
        case 'y': int y, m, d; 
                cout << "yyyy/mm/dd/에 들어갈 년도와 달 그리고 일을 입력해주세요 : ";
                cin >> y >> m >> d;
                da.SetDate(y, m, d);
                da.ShowDate();
                break;

        default: break;
        
    }

    for(;;)
    {
    int choose;
    cout << endl;
    cout << "1. 년도 증가" << endl;
    cout << "2. 달 증가" << endl;
    cout << "3. 일 증가" << endl;
    cout << "어떤걸 증가하시겠습니까 : ";
    cin >> choose;

    switch(choose)
    {
        int input_num;
        case 1: cout << "몇 년 증가시키시겠습니까 : ";
                cin >> input_num;
                da.AddYear(input_num);
                da.ShowDate();
                break;
        case 2: cout << "몇 달 증가시키시겠습니까 :";
                cin >> input_num;
                da.AddMonth(input_num);
                da.ShowDate();
                break;
        case 3: cout << "몇 일 증가시키시겠습니까 : ";
                cin >> input_num;
                da.AddDay(input_num);
                da.ShowDate();
                break;
        default: cout << "목록에 있는 1, 2, 3 중에 선택해주세요." << endl;
    }

    }
    return 0;
}
void Date::SetDate(int year, int month, int day)
{
    year_ = year;
    month_ = month;
    day_ = day;
}

void Date::AddDay(int inc)
{
    day_ += inc;

    if(month_ == 2 && day_ == 28)
    {
        month_++;
        day_= 0;
    }

    if(day_ > 31)
    {
        month_++;
        day_ = 0;
    }
    
}

void Date::AddMonth(int inc)
{
    month_ += inc;
    if(month_ > 12)
    {
        year_++;
        month_ = 0;
    }
}

void Date::AddYear(int inc)
{
    year_ += inc;
}

void Date::ShowDate()
{
    cout << "초기 설정된 날짜는 " << this->year_ << "/" << this->month_ << "/" << this->day_ << " 입니다." << endl;
}
