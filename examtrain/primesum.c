#include <stdio.h>
#include <unistd.h>

int isprime(int nb)
{
    if (nb == 0 ||nb ==1)
        return 0;
    int i;
     i = 2;
   while (i <= nb / i)
	{
		if (nb % i == 0)
			return 0;
		i ++;
	}
	return (1);
}
int main() {
    // Write C code here
    int i= 2;
    int sum = 0;
    while (i > 0)
    {
        if (isprime(i))
            sum += i;
        i--;
    }
    printf("%d", sum);
}
