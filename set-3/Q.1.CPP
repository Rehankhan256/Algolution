#include <iostream>
#include <cmath>
#include <set>
using namespace std;

set<int> prime_factors(int n) {
    set<int> factors;
    while (n % 2 == 0) {
        factors.insert(2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            factors.insert(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.insert(n);
    }
    
    return factors;
}
int square_free_divisors(int n) {
    set<int> primes = prime_factors(n);
    return pow(2, primes.size()) - 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The number of square-free divisors of " << n << " is: " 
         << square_free_divisors(n) << endl;
    
    return 0;
}
