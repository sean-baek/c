#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str = "C++ Programming";

    cout << str.find("pro") << endl;
    cout << str.find('r') << endl;

    if(str.find("pro", 5) != string::npos)
    {
        cout << "해당 문자열을 찾았습니다.";
    }
    else
    {
        cout << "해당 문자열을 찾지 못했습니다.";
    }

    return 0;
}
