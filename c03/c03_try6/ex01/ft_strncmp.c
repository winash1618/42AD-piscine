
#include <string.h> 
#include <stdio.h>
#include <unistd.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    j;
    j = 0;
    while (j < n)
    {
        if (*s1 < *s2)
        {
            return (*s1 - *s2);
        }
        else if (*s1 > *s2)
        {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
        j++;
    }
    return (0);
}

int main(void)
{
    char s1[] = "Hello hi";
    char s2[] = "Hello me";
    char sr1[] = "Hello hi";
    char sr2[] = "Hello me";
    printf("%d\t", ft_strncmp(s1, s2, 5));
    printf("%d", strncmp(sr1, sr2, 5));
    return 0;
}