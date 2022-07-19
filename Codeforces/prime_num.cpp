// the following implementation
// stores only halves of odd numbers
// the algorithm is a faster by some constant factors

#include <bitset>
#include <iostream>
using namespace std;

bitset<1000000001> Primes;
void SieveOfEratosthenes(int n)
{
	Primes[0] = 1;
	for (int i = 3; i*i <= n; i += 2) {
		if (Primes[i / 2] == 0) {
			for (int j = 3 * i; j <= n; j += 2 * i)
				Primes[j / 2] = 1;
		}
	}
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
	    SieveOfEratosthenes(n);
	    if(Primes[n]==0)cout<<"Prime"<<endl;
        else cout<<"Not Prime"<<endl;
    }
	
	return 0;
}
