#include <iostream>
using namespace std;

class Book
{
    int current_page_;
    void set_percent();
    public:
    Book(const string& title, int total_page);
    string title_;
    int total_page_;
    double percent_;
    void Move(int page);
    void Open();
    void Read();
    const Book& ThickerBook(const Book&);
};

int main(void)
{
    Book web_book("HTML과 CSS", 350);
    Book html_book("HTML과 레퍼런스", 200);

    cout << web_book.ThickerBook(html_book).title_;
    return 0;
}

Book::Book(const string& title, int total_page) //Book 클래스의 생성자, 객체는 멤버 변수들이 초기화 되기 전까지 사용을 못하는데 private 변수들을 초기화 하기 위함.
{
    title_ = title;
    total_page_ = total_page;
    current_page_ = 0;
    set_percent();
}

void Book::set_percent() { percent_ = (double) current_page_ / total_page_ * 100;}

const Book& Book::ThickerBook(const Book& comp_book)
{
    if(comp_book.total_page_ > this->total_page_)
    {
        return comp_book;
    }
    else
    {
        return *this;
    }
}
