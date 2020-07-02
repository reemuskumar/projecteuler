#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
typedef unsigned long ulong;

class isEven {
    public:
        ulong operator()(const ulong& a, const ulong& b) {
            return (b % 2 == 0) ? a + b : a;
        }
};

ulong fibEvenSum(ulong num) {
    ulong tmp = 0, fib1 = 1, fib2 = 2;
    vector<ulong> fibvec;
    
    fibvec.push_back(fib1);
    fibvec.push_back(fib2);
    tmp = fib1 + fib2;
    
    while (tmp < num) {
        fibvec.push_back(tmp);
        fib1 = fib2;
        fib2 = tmp;
        tmp = fib1 + fib2;
    }
    
    return accumulate(fibvec.begin(), fibvec.end(), 0, isEven());
}

int main()
{
    ulong num = 4000000;
    cout << fibEvenSum(num) << endl;
    return 0;
}
