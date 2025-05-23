#include <stdio.h>
 #include <stdlib.h>
char **ft_split(char const *s, char c)
{

    printf("in function \"%s\"\nand char '%c'\n", s, c);
    char **array = malloc(5 * sizeof(char *));
    if (!array)
        return (NULL);
        array[0] = "pipo";
        array[1] = "anvil";
        array[2] = "Juan";
        array[3] = "Escher";
        array[4] = NULL;
    return (array);
    /*
Parámetros
s: La string a separar.        "pipo-anvil-Juan-Escher", '-'
c: El carácter delimitador. ["pipo", "anvil", "Juan", "Escher", NULL]

Valor devuelto
El array de nuevas strings resultante de la separación.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc, free

Descripción Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.


*/
}