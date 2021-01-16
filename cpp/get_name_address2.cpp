#include <iostream>

using namespace std;

int main(void)
{
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];

    cout << "What your name : ";
    cin.get(name, SIZE).get();
    cout << "Where r u living : ";
    cin.get(address, SIZE).get();

    cout << address << "에 살고 있는" << name << "님 안녕하세요";

    return 0;
}
