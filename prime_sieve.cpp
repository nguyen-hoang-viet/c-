#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long prime[n + 1];
    fill(prime, prime + n + 1, 1);
    prime[0] = prime[1] = 0;
    for (long long i = 2; i <= sqrt(n); i++)
        if (prime[i] == 1)
            for (long long j = i * i; j <= n; j += i)
                    prime[j] = 0;
    for (long long i = 1; i <= n; i++)
        if (prime[i] == 1)
            cout << i << " ";
    return 0;
}