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
                numslen = ft_strlen(nums);
                printf("numslen %zu\n", numslen);
                while (x < numslen - 1)
                {
                    // hacer un char * con 0 tantos ceros como tenga numslen
                    // si nums es 983 el leng es 3 hago ese char "000" por lo tanto si sumo nums + "000" 
                    // me dara el int
                    printf("nums[%zu] es %c\nnums[%zu] es %c\n", x, nums[x], x + 1, nums[x + 1]);
                    printf("value es %d\n", (nums[x] - '0') * 10 + (nums[x + 1] - '0'));
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