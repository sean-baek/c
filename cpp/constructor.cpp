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
};

int main(void)
{
    Book web_book("HTML과 CSS", 350);
    cout << web_book.percent_;
    return 0;
}

Book::Book(const string& title, int total_page)
{
    title_ = title;
    total_page_ = total_page;
    current_page_ = 0;
    set_percent();
}

void Book::set_percent()
{
    percent_ = (double) current_page_ / total_page_ * 100;
}
