#include "libft.h"
#include <stdio.h>
#include <string.h>

void	functionstriter(unsigned int i, char *str)
{
	if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' )
			*str = (i % 5) + 60;
}


char	functionstrmap(unsigned int i, char str)
{
	if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' )
		str = i % 5 + 60;	
	return str;
}


int	main(void)
{
/*	
printf("\n=========== FT_ISALPHA ===========\n\n");

printf("Test 1: %c -> %s (esperado: true)\n", 'A', ft_isalpha('A') ? "true" : "false");
printf("Test 2: '%c' -> %s (esperado: true)\n", 'z', ft_isalpha('z') ? "true" : "false");
printf("Test 3: '%c' -> %s (esperado: false)\n", '5', ft_isalpha('5') ? "true" : "false");
printf("Test 4: '%c' -> %s (esperado: false)\n", '$', ft_isalpha('$') ? "true" : "false");
printf("Test 5: '%c' -> %s (esperado: false)\n", '\n', ft_isalpha('\n') ? "true" : "false");

printf("\n=========== FT_ISDIGIT ===========\n\n");

printf("Test 1: '%c' -> %s (esperado: true)\n", '0', ft_isdigit('0') ? "true" : "false");
printf("Test 2: '%c' -> %s (esperado: true)\n", '9', ft_isdigit('9') ? "true" : "false");
printf("Test 3: '%c' -> %s (esperado: false)\n", 'A', ft_isdigit('A') ? "true" : "false");
printf("Test 4: '%c' -> %s (esperado: false)\n", ' ', ft_isdigit(' ') ? "true" : "false");

printf("\n=========== FT_ISALNUM ===========\n\n");

printf("Test 1: '%c' -> %s (esperado: true)\n", 'b', ft_isalnum('b') ? "true" : "false");
printf("Test 2: '%c' -> %s (esperado: true)\n", '7', ft_isalnum('7') ? "true" : "false");
printf("Test 3: '%c' -> %s (esperado: false)\n", '%', ft_isalnum('%') ? "true" : "false");

printf("\n=========== FT_ISASCII ===========\n\n");

printf("Test 1: %d -> %s (esperado: true)\n", 65, ft_isascii(65) ? "true" : "false");
printf("Test 2: %d -> %s (esperado: false)\n", 200, ft_isascii(200) ? "true" : "false");
printf("Test 3: %d -> %s (esperado: false)\n", -5, ft_isascii(-5) ? "true" : "false");
printf("Test 4: %d -> %s (esperado: true)\n", 127, ft_isascii(127) ? "true" : "false");

printf("\n=========== FT_ISPRINT ===========\n\n");

printf("Test 1: '%c' -> %s (esperado: true)\n", 'a', ft_isprint('a') ? "true" : "false");
printf("Test 2: '%c' -> %s (esperado: false)\n", '\n', ft_isprint('\n') ? "true" : "false");
printf("Test 3: '%c' -> %s (esperado: false)\n", '\t', ft_isprint('\t') ? "true" : "false");
printf("Test 4: '%c' -> %s (esperado: true)\n", '~', ft_isprint('~') ? "true" : "false");
printf("Test 5: '%c' -> %s (esperado: true)\n", ' ', ft_isprint(' ') ? "true" : "false");

printf("\n=========== FT_TOUPPER ===========\n\n");

printf("Test 1: '%c' -> '%c' (esperado: 'A')\n", 'a', ft_toupper('a'));
printf("Test 2: '%c' -> '%c' (esperado: 'Z')\n", 'z', ft_toupper('z'));
printf("Test 3: '%c' -> '%c' (esperado: 'B')\n", 'B', ft_toupper('B')); // ya es mayúscula
printf("Test 4: '%c' -> '%c' (esperado: '5')\n", '5', ft_toupper('5')); // no es letra
printf("Test 5: '%c' -> '%c' (esperado: '$')\n", '$', ft_toupper('$')); // no es letra

printf("\n=========== FT_TOLOWER ===========\n\n");

printf("Test 1: '%c' -> '%c' (esperado: 'a')\n", 'A', ft_tolower('A'));
printf("Test 2: '%c' -> '%c' (esperado: 'z')\n", 'Z', ft_tolower('Z'));
printf("Test 3: '%c' -> '%c' (esperado: 'g')\n", 'g', ft_tolower('g')); // ya es minúscula
printf("Test 4: '%c' -> '%c' (esperado: '3')\n", '3', ft_tolower('3')); // no es letra
printf("Test 5: '%c' -> '%c' (esperado: '&')\n", '&', ft_tolower('&')); // no es letra

printf("\n=========== FT_STRLEN ===========\n\n");

printf("Test 1: \"%s\" -> %zu (ft), %zu (libc)\n", "Hola", ft_strlen("Hola"), strlen("Hola"));
printf("Test 2: \"%s\" -> %zu (ft), %zu (libc)\n", "", ft_strlen(""), strlen(""));
printf("Test 3: \"%s\" -> %zu (ft), %zu (libc)\n", "123456789", ft_strlen("123456789"), strlen("123456789"));


printf("\n=========== FT_STRCHR ===========\n\n");

const char *strch = "abcdef";
printf("Test 1: strchr('%s', '%c') -> \"%s\" (ft), \"%s\" (libc)\n", strch, 'c',
       ft_strchr(strch, 'c'), strchr(strch, 'c'));

printf("Test 2: strchr('%s', '%c') -> \"%s\" (ft), \"%s\" (libc)\n", strch, 'x',
       ft_strchr(strch, 'x'), strchr(strch, 'x'));

printf("Test 3: strchr('%s', '\\0') -> \"%s\" (ft), \"%s\" (libc)\n", strch,
       ft_strchr(strch, '\0'), strchr(strch, '\0'));

printf("\n=========== FT_STRRCHR ===========\n\n");

const char *strrc = "abcbcde";
printf("Test 1: strrchr('%s', '%c') -> \"%s\" (ft), \"%s\" (libc)\n", strrc, 'c',
		ft_strrchr(strrc, 'c'), strrchr(strrc, 'c'));

printf("Test 2: strrchr('%s', '%c') -> \"%s\" (ft), \"%s\" (libc)\n", strrc, 'x',
		ft_strrchr(strrc, 'x'), strrchr(strrc, 'x'));

printf("Test 3: strrchr('%s', '\\0') -> \"%s\" (ft), \"%s\" (libc)\n", strrc,
		ft_strrchr(strrc, '\0'), strrchr(strrc, '\0'));

printf("\n=========== FT_STRNCMP ===========\n\n");

printf("Test 1: \"%s\" vs \"%s\" (n=3) -> %d (ft), %d (libc)\n",
		"abc", "abc", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));

printf("Test 2: \"%s\" vs \"%s\" (n=2) -> %d (ft), %d (libc)\n",
		"abc", "abd", ft_strncmp("abc", "abd", 2), strncmp("abc", "abd", 2));

printf("Test 3: \"%s\" vs \"%s\" (n=0) -> %d (ft), %d (libc)\n",
		"abc", "xyz", ft_strncmp("abc", "xyz", 0), strncmp("abc", "xyz", 0));

printf("\n=========== FT_STRNSTR ===========\n\n");

const char *h = "lorem ipsum dolor sit amet";
const char *n = "ipsum";

printf("Test 1: haystack: \"%s\", needle: \"%s\", len: %d -> \"%s\" (ft), \"%s\" (libc)\n",
		h, n, 15, ft_strnstr(h, n, 15), strnstr(h, n, 15));

printf("Test 2: \"%s\", needle \"%s\", len 5 -> \"%s\" (ft), \"%s\" (libc)\n",
		h, n, ft_strnstr(h, n, 5), strnstr(h, n, 5));

printf("Test 3: needle vacía -> \"%s\" (ft), \"%s\" (libc)\n",
		ft_strnstr(h, "", 10), strnstr(h, "", 10));

printf("\n=========== FT_STRLCPY ===========\n\n");

char dsslc1[20];
char dsslc2[20];
const char *srcslcp = "Hello, world!";

size_t r1stlcp = ft_strlcpy(dsslc1, srcslcp, 10);
size_t r2stlcp = strlcpy(dsslc2, srcslcp, 10);

printf("Test 1: src = \"%s\", size = 10 -> \"%s\" (ft), \"%s\" (libc) | return: %zu (ft), %zu (libc)\n",
		srcslcp, dsslc1, dsslc2, r1stlcp, r2stlcp);

printf("\n=========== FT_STRLCAT ===========\n\n");

char dslcat1[20] = "Hola ";
char dslcat2[20] = "Hola ";
const char *srcslc = "mundo!";

size_t r1slcat = ft_strlcat(dslcat1, srcslc, 20);
size_t r2slcat = strlcat(dslcat2, srcslc, 20);

printf("Test 1: dst = \"Hola \", src = \"%s\", size = 20 -> \"%s\" (ft), \"%s\" (libc) | return: %zu (ft), %zu (libc)\n",
srcslc, dslcat1, dslcat2, r1slcat, r2slcat);

char buffer1[20];
char buffer2[20];

printf("\n=========== FT_MEMSET ===========\n\n");
memset(buffer1, 'A', 10);
ft_memset(buffer2, 'A', 10);
printf("memset   : %.10s\n", buffer1);
printf("ft_memset: %.10s\n", buffer2);

printf("\n=========== FT_BZERO ============\n\n");
memset(buffer1, 'X', 10);
memset(buffer2, 'X', 10);
bzero(buffer1, 5);
ft_bzero(buffer2, 5);
printf("bzero    : %.*s\n", 10, buffer1);
printf("ft_bzero : %.*s\n", 10, buffer2);
		
printf("\n=========== FT_MEMCPY ===========\n\n");
char src1[] = "1234567890";
char dst1[15];
char dst2[15];
memcpy(dst1, src1, 11);
ft_memcpy(dst2, src1, 11);
printf("memcpy   : %s\n", dst1);
printf("ft_memcpy: %s\n", dst2);

printf("\n=========== FT_MEMMOVE ===========\n\n");
char str1[] = "abcdef";
char str2[] = "abcdef";
memmove(str1 + 2, str1, 4);      // overlap
ft_memmove(str2 + 2, str2, 4);   // overlap
printf("memmove   : %s\n", str1);
printf("ft_memmove: %s\n", str2);

printf("\n=========== FT_MEMCHR ===========\n\n");
const char *mench = "Hola mundo!";
void *r1mech = memchr(mench, 'm', 10);
void *r2mech = ft_memchr(mench, 'm', 10);
printf("memchr    : %s\n", r1mech ? (char *)r1mech : "(null)");
printf("ft_memchr : %s\n", r2mech ? (char *)r2mech : "(null)");

printf("\n=========== FT_MEMCMP ===========\n\n");
char a1[] = "abcde";
char a2[] = "abcdf";
int cmp1 = memcmp(a1, a2, 5);
int cmp2 = ft_memcmp(a1, a2, 5);
printf("memcmp    : %d\n", cmp1);
printf("ft_memcmp : %d\n", cmp2);
		
printf("\n=========== FT_ATOI ============\n\n");

const char *tests[] = {
	"42", "-42", "+42", "   123", "999abc", "abc123", "  -00100", "2147483647", "-2147483648", "   +0", NULL
};

for (int i = 0; tests[i]; i++) {
	printf("Entrada: \"%s\"\n", tests[i]);
	printf("atoi     : %d\n", atoi(tests[i]));
	printf("ft_atoi  : %d\n\n", ft_atoi(tests[i]));
}

printf("\n=========== FT_CALLOC ============\n\n");

int *arr1 = (int *)calloc(5, sizeof(int));
int *arr2 = (int *)ft_calloc(5, sizeof(int));

printf("calloc    : ");
for (int i = 0; i < 5; i++) printf("%d ", arr1[i]);
printf("\n");

printf("ft_calloc : ");
for (int i = 0; i < 5; i++) printf("%d ", arr2[i]);
printf("\n");

free(arr1);
free(arr2);

printf("\n=========== FT_STRDUP ============\n\n");

const char *orig = "Hola libft!";
char *dup1 = strdup(orig);
char *dup2 = ft_strdup(orig);

printf("strdup    : %s\n", dup1);
printf("ft_strdup : %s\n", dup2);

free(dup1);
free(dup2);
	
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

printf("\n=========== FT_STRTRIM ===========\n\n");
	char *strtrim;
	strtrim = ft_strtrim("<lima<>limon:{po>", "<:{po>");
	printf("Test 1: \"%s\"\n", strtrim);

		
	free(strtrim);

printf("\n=========== FT_SPLIT ===========\n\n");	


char **split = ft_split("--pipos--anv-Juan-Es-cher?", '-');
int i = 0;
while (split[i])
{
	printf("Palabra ft_split %d: %s\n", i, split[i]);
	free(split[i]);
	i++;
}
free(split);

printf("\n=========== FT_ITOA ============\n\n");

	int tests[] = 
	{ 0, 1, -1, 42, -42, 123456, -123456, 2147483647 , -2147483648,
	 1000000000, -1000000000, 999, -999, 7, 7, 987654321, -987654321,
	};
	
	int i = 0;
	while (i < (int)(sizeof(tests) / sizeof(tests[0])))
	{
		char *result = ft_itoa(tests[i]);
		printf("Entrada   : %d\n", tests[i]);
		printf("ft_itoa   : \"%s\"\n\n", result);
		free(result);
		i++;
	}


printf("\n=========== FT_STRMAPI ============\n\n");

const char *str = "Culero y estamos vivos de 9 vidas";
char *strmapitest = ft_strmapi(str, functionstrmap);
	printf("test \"%s\"\n", strmapitest );
free(strmapitest);

printf("\n=========== FT_STRITER ============\n\n");

char striter[] = "Culero y fin";
ft_striteri(striter, functionstriter);
	printf("test \"%s\"\n", striter );
	
printf("\n=========== FT_PUTCHAR_FD ============\n\n");

ft_putstr_fd("perros en el aljibe", 1);
*/
printf("\n=========== FT_PUTENDL_FD ============\n\n");


    return (0);
}
