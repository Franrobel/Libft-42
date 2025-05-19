#include <stdio.h>
#include "libft.h"
int ft_atoi(const char *str)
{
    // recibo una cadena de caracteres ej "123" ó " 1F267"
    // converti numeros a entero
    //  si '-' antes de numeros devuelve el -
    //  si '+' quita ese caracter
    //  si "ahuishu" devuelve 0
    //  ascii  45  48 57
    //   int    -   0  9
    //  output entero
    // int atoi;

    char nums[12];
    int value;
    int i;
    int j;
    size_t numslen;
    size_t x;
    i = 0;
    j = 0;
    x = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            printf(" num j y i es %d %d\n", j, i);
            nums[j] = str[i];
            j++;
            // printf(" X i+1 es %d\n", i+1);
            if (str[i + 1] < '0' || str[i + 1] > '9')
            {
                // printf("nums '%s'\n", nums);
                // printf("numslen %zu\n", numslen);
                numslen = ft_strlen(nums);
                while (nums[x] != '\0' && x < numslen - 1)
                {
                    value = (nums[x] - '0') * 10 + (nums[x + 1] - '0');
                    x++;
                }
                return (value);
            }
        }
        //  printf("str[%d] is %c\n", i, str[i]);
        i++;
    }
    // printf("nums %s\n", nums);
    return (0);
}