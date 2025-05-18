#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

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

	const char *largestring = "programacion";
	const char *smallstring = "grama";
	char *ptr;
	

	ptr = ft_strnstr(largestring, smallstring, 8);


printf("in prueba result %s\n", ptr);
	return (0);
}
