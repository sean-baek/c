#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1, str2, str3;

    str1.append("C++ Programming");
    str2.append("C++ Programming", 4, 6);
    str3.append(4, 'x');

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3;

    return 0;
}
