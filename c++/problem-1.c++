#include <iostream>

using namespace std;
typedef unsigned long ulong;

ulong sum3or5(int num) {
    ulong sum = 0;
    for (int i = 1; i < num; i++) {
        if (i % 3 == 0 or i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    cout << sum3or5(1000) << endl;
    return 0;
}
