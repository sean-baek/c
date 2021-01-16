#include <iostream>

using namespace std;

int main(void)
{
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];

    cout << "자신의 이름을 적어주세요 : ";
    cin >> name;
    cout << "자신이 살고 있는 도시를 적어주세요 : ";
    cin >> address;

    cout << address << "에 살고있는" << name << " 님 안녕하세요";

    return 0;
}
