#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string address, name;

    cout << "What's your name : ";
    getline(cin, name);
    cout << "where is your living : ";
    getline(cin, address);

    cout << address << "에 살고 있는" << name << "님 안녕하세요";

    return 0;
}
