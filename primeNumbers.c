#include <stdio.h>
#include <math.h>

#define count 1000

int main() {

	int primes[count];
	primes[0] = 2;
	primes[1] = 3;
	int primeIndex = 2;
	int isPirme;

	printf("%d, %d, ", primes[0], primes[1]);

	for (int i = 5; i < count; i+=2)
		{
			isPirme = 1;
			for (int j = 0; primes[j] <= sqrt(i); ++j)
			{
				if(i % primes[j] == 0) {
					isPirme = 0;
					break;
				}
			}

			if (isPirme != 0)
			{
				primes[primeIndex] = i;
				printf("%d, ", primes[primeIndex]);
				primeIndex++;
			}
	}	


}