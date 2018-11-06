#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int		main(void)
{
	setlocale(LC_ALL, "en_US.utf8");
	wchar_t	str[] = L"wide_string";
	printf("str: ");
	int ret = printf("%ls", str);
	printf("\nret = %d\nwstr: ", ret);
	wchar_t	wstr[] = L"z\u00df\u6c34\U0001f34c";
	ret = printf("%ls", wstr);
	printf("\nret = %d\nwcstr (fw = 20): ", ret);
	ret = printf("%20ls", wstr);
	printf("\nret = %d\nwcstr (fw = 20, precision = 9): ", ret);
	printf("%20.9ls", wstr);
	printf("\nret = %d\nc: ", ret);
	ret = printf("%lc", (wint_t)0x1f34c);
	printf("\nret = %d\n", ret);
	ret = printf("%ls\n", (wchar_t *)NULL);
	printf("ret = %d\n", ret);
	printf("%hhp\n", (void *)printf);
	printf("%hhhp\n", (void *)printf);
	printf("neg pointer: %p\n", (void *)-345);
	printf("short cast: %hd\n", (short)123456789);
	printf("int cast:   %hd\n",   (int)123456789);
	printf("char cast:  %hd\n",  (char)123456789);
	
	int	p = 0;
	while (p < 10)
		printf("cust : %.*S\n", p++, NULL);

	return (0);
}
