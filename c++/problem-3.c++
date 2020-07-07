#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
typedef unsigned long long ullong;

void get_prime_factors(ullong num, vector<ullong> &prime_factors)
{
    for (ullong fac = 2; fac <= sqrt(num); fac++) {
        if ((num % fac) == 0) {
            cout << fac << endl;
            prime_factors.push_back(fac);
            while (((num % fac) == 0) && (num != fac))
                num /= fac;
        }
    }
    prime_factors.push_back(num);
}

int main()
{
    ullong num = 600851475143L;
    vector<ullong> prime_factors;
    
    get_prime_factors(num, prime_factors);
    
    cout << "Largest Prime Factor: " << prime_factors.back() << endl;
    return 0;
}
