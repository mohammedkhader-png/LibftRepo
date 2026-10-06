//#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return (char *)&s[i];
        }
        i++;
    }
    return NULL;
}

// int main(void)
// {
//     char *res;

//     // Test 1: Match at start
//     res = strchr("hello", 'h');
//     printf("Result 1: %s\n", res ? res : "NULL");

//     // Test 2: Match in middle
//     res = strchr("hello", 'l');
//     printf("Result 2: %s\n", res ? res : "NULL");

//     // Test 3: Not found
//     res = strchr("hello", 'x');
//     printf("Result 3: %s\n", res ? res : "NULL");

//     return 0;
// }