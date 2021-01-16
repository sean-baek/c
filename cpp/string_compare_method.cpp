#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str1 = "ABC";
    string str2 = "ABD";

    if(str1.compare(str2) == 0)
    {
        cout << str1 << "이 " << str2 << "와 같습니다.";
    }
    else if(str2.compare(str2) < 0)
    {
        cout << str1 <<"이 " << str2 << "보다 사전 편찬 순으로 앞에 있습니다.";
    }
    else
    {
        cout << str1 << "이 " << str2 << "보다 사전 편찬 순으로 뒤에 있습니다.";
    }
    return 0;
}
