#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
int	main(void)
{
	// FT_ISALPHA
		//int numero = ft_isalpha('a');
		//printf("in prueba ft_alpha: %d\n", numero );
	// FT_ISDIGIT
		//int numero = ft_isdigit('a');
		//printf("ft_digit %d", numero);
	// FT_ISALNUM
		//int numero = ft_isalnum('_');
		//printf("ft_isalnum %d", numero);
	// FT_ISASCII
	/*for (int i = -10; i <= 140; i++)
	{
		if (ft_isascii(i) != isascii(i))
			printf("Mismatch at %d\n", i);
	}
	printf("Test complete\n");*/
	// FT_ISPRINT
	/*for (int i = 32; i > 126 && i < 32; i++)
	{
		if (ft_isprint(i) != isprint(i))
			printf("Mismatch at %d\n", i);
	}*/
	//printf("Test complete\n");
	//size_t lenght = ft_strlen("pelos y otras");
	//printf("string length %ld\n", lenght);
	// FT_MEMSET
	/*
		int num1[5];
		int num2[5];
		ft_memset(num1, 0, sizeof(num1));
		memset(num2, 0, sizeof(num2));
		if (memcmp(num1, num2, sizeof(num1)) == 0)
			printf("Test OK ✅\n");
		else
			printf("Mismatch ❌\n");
	// FT_BZERO
		int a[5] = {1, 2, 3, 4, 5};
		int b[5] = {1, 2, 3, 4, 5};

		ft_bzero(a, 2 * sizeof(int));
		memset(b, 0, 2 * sizeof(int));

		int iguales = 1;
		unsigned char *pa = (unsigned char *)a;
		unsigned char *pb = (unsigned char *)b;
		for (int i = 0; i < (int)sizeof(a); i++)
		{
			if (pa[i] != pb[i])
			{
				iguales = 0;
				break;
			}
		}	
		if (iguales)
			printf("✅ Test OK: bzero sobre enteros funciona igual que memset\n");
		else
			printf("❌ Test FAIL: hay diferencias en memoria\n");
	*/
	// FT_MEMCPY
		/*char	*a = "hola";
		char	*b = "chau";
		
		printf("Value of a before calling memcpy: %s\n", a);
		
		ft_memcpy(&a, &b, 2);
		
		printf("Value of a after calling memcpy: %s\n", a);
		*/	
	//FT_MEMMOVE
		/*int arr[6] = {1, 2, 3, 4, 5, 6};
		printf("before memmove\n");
		for (int i = 0; i < 6; i++)
		{
		printf("i %d  is %d\n",  i, arr[i]);
		}
		ft_memmove(&arr[4], &arr[2], 2*sizeof(int));
		printf("\n\n");		
		printf("after memmove\n");
		for (int i = 0; i < 6; i++)
		{
		printf("i %d is %d\n", i, arr[i]);
		}*/
	/*	const char *str = "Hello, world!";
		int c = 'o';
	
		// Prueba con ft_strchr
		char *result_ft = ft_strrchr(str, c);
		if (result_ft != NULL) {
			printf("ft_strrchr: Caracter '%c' encontrado en la posición %ld\n", c, result_ft - str);
		} else {
			printf("ft_strrchr: Caracter '%c' no encontrado\n", c);
		}
	
		// Prueba con strchr
		char *result_std = strrchr(str, c);
		if (result_std != NULL) {
			printf("strrchr: Caracter '%c' encontrado en la posición %ld\n", c, result_std - str);
		} else {
			printf("strrchr: Caracter '%c' no encontrado\n", c);
		}
	*/
/*char dest[10] = "Hello";
const char *src = " World!";
size_t copied;

copied = ft_strlcat(dest, src, sizeof(dest));

if (copied >= sizeof(dest)) {
	printf("Truncated!\n");
}

printf("Result: %s\n", dest);
printf("Total length: %zu\n", copied);*/

//char *ocu = ft_memchr("const", 'n', 3);

//int num = ft_memcmp ("efto", "eclo", 2);
//printf("in prueba ft_memcmp %d\n", num);
/*
	const char *largestring = "programacion";
	const char *smallstring = "grama";
	char *ptr;
	

	ptr = ft_strnstr(largestring, smallstring, 8);
*/
//int ptr = ft_atoi(" -123abc456");
//printf("in prueba result %d\n", ptr);
/*
 printf("=== Test 1: calloc normal (2 ints) ===\n");
    int cantelm = 76;
    int *arr = (int *)calloc(cantelm, sizeof(int));
    if (arr == NULL)
        printf("Error: calloc returned NULL\n");
    else {
        for (int i = 0; i < cantelm; i++)
            printf("arr[%d] = %d\n", i, arr[i]); // todos deberían ser 0
        free(arr);
    }
    putchar('\n');
 printf("=== Test 1: ft_calloc normal (2 ints) ===\n");
  putchar('\n');
    int *arr1 = (int *)ft_calloc(cantelm, sizeof(int));
    if (arr1 == NULL)
        printf("Error: ft_calloc returned NULL\n");
    else {
        for (int i = 0; i < cantelm; i++)
            printf("ft_ arr1[%d] = %d\n", i, arr1[i]); // todos deberían ser 0
        free(arr1);
    }
*/
/*
printf("\n\n=========== FT_STRDUP ===========\n\n");
	const char *original = "Holas";
	char *copia = ft_strdup(original);

    	if (!copia)
    		printf("❌ Test 1: malloc falló\n");

  
    	if (strcmp(original, copia) == 0 && original != copia)
        	printf("✅ Test 1: Cadena copiada correctamente\n");
    	else
    		printf("❌ Test 1: Fallo en la copia\n");
    	printf("original : %s\ncopia : %s\n", original, copia);
    	free(copia);

	const char *original1 = "";
	char *copia1 = ft_strdup(original1);
	if (!copia1)
		printf("❌ Test 2: malloc falló\n");
	if (strcmp(original1, copia1) == 0 && original1 != copia1)
        	printf("✅ Test 2: Copia de cadena vacía correcta\n");
        else
        	printf("❌ Test 2: Fallo en la copia vacía\n");
        printf("original1 : %s\ncopia1 : %s\n", original1, copia1);
        free(copia1);

	const char *original2 = "Línea 1\tLínea 2 ☃️";
	char *copia2 = ft_strdup(original2);

	if (!copia2)
	    	printf("❌ Test 3: malloc falló\n");
   
	if (strcmp(original2, copia2) == 0 && original2 != copia2)
	        printf("✅ Test 3: Copia con caracteres especiales correcta\n");
	else
	        printf("❌ Test 3: Fallo en copia con caracteres especiales\n");
	printf("original2 : %s\ncopia2 : %s\n", original2, copia2);        
    	free(copia2);
  */
 /*
 printf("\n=========== FT_SUBSTR ===========\n\n");
 
	char *res;

	// Caso normal
	res = ft_substr("ABCDEF", 2, 3);
	printf("Test 1: \"%s\" (esperado: \"CDE\")\n", res);
	free(res);

	// start = longitud cadena, devuelve ""
	res = ft_substr("ABCDEF", 6, 3);
	printf("Test 2: \"%s\" (esperado: \"\")\n", res);
	free(res);

	// start > longitud cadena, devuelve ""
	res = ft_substr("ABCDEF", 10, 3);
	printf("Test 3: \"%s\" (esperado: \"\")\n", res);
	free(res);

	// len mayor que resto cadena
	res = ft_substr("ABCDEF", 4, 10);
	printf("Test 4: \"%s\" (esperado: \"EF\")\n", res);
	free(res);

	// len = 0, devuelve ""
	res = ft_substr("ABCDEF", 2, 0);
	printf("Test 5: \"%s\" (esperado: \"\")\n", res);
	free(res);

	// s == NULL, devuelve NULL (no imprimir para no crash)
	res = ft_substr(NULL, 2, 3);
	printf("Test 6: %s (esperado: NULL)\n", (res == NULL) ? "NULL" : "NOT NULL");
	// no hay free porque es NULL

printf("\n=========== FT_STRJOIN ===========\n\n");

	res = ft_strjoin("ABCDEF", "ABCDEF");
	printf("Test 1: \"%s\"\n", res);
	free(res);

	// start = longitud cadena, devuelve ""
	res = ft_strjoin("pino ", "ssaok");
	printf("Test 2: \"%s\"\n", res);
	free(res);
	
	res = ft_strjoin("", "ABCDEF");
	printf("Test 3: \"%s\"\n", res);
	free(res);
	res = ft_strjoin("", "");
	printf("Test 4: \"%s\"\n", res);
	free(res);
*/	
printf("\n=========== FT_STRTRIM ===========\n\n");
	char *strtrim;
	strtrim = ft_strtrim("<lima<>limon:{po>", "<:{po>");
	printf("Test 1: \"%s\"\n", strtrim);

		
	free(strtrim);

printf("\n=========== FT_prop ===========\n\n");	
	
    return (0);
}
