// Online C compiler to run C program online
#include <stdio.h>

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int i,j;
	i = 0;
	j = 0;
	
	while (s1[i] && s2[j])
	{
	    if (s1[i] == s2[j])
	        i++;
	   j++;
	}
	if (s1[i] == 0)
	{
	    int k = 0;
	    while (s1[k])
	        write(1,&s1[k++],1);
	}
}
int main()
{
    char s[] = "quarante deux";
    char o[] = "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq ";
    wdmatch(s,o);
    
}
