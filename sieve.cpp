#include <bits/stdc++.h>

using namespace std;

void Sieve(long long int n)
{
    bool prime[n+1];
    memset( prime , true , sizeof(prime));

    for(long long int p=2 ; p <= n ; ++p)
    {
        if(prime[p]==true)
        {
            for(long long int i = p*p ; i<=n ; i+=p)
                prime[i]= false;
        }
    }

    for (long long int p=2; p<=n ; p++)
    {
        if(prime[p])
            cout << p <<" ";
    }
}
using namespace std;

int main()
{
    long long int n;
    cout << "Enter the no. upto which you want all prime no.s."<<endl;
    cin >> n;

    cout <<endl;
    cout << "Following are the prime numbers smaller than or equal to "<< n <<endl;
    Sieve(n);
}
