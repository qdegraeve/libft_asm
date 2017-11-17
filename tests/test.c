#include "test.h"

static void		test_bzero() {
	char test[5] = "test\0";
	char test2[5] = "test\0";
	size_t  values[4] = {0, 4,  1, 5};
	int  ret = 0, cmp = 0;

	printf("Test function BZERO --> [ ");
	for (int i = 0; i < 4; ++i) {
		bzero(test2, values[i]);
		ft_bzero(test, values[i]);
		cmp = strncmp(test, test2, 5);
		printf("%s. ", cmp ? RED : GRN);
		ret += cmp;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_strlen() {
	int  ret = 0, cmp = 0;
	char	*test[4] = {
		"",
		"\0",
		"je suis tres beau",
		"je suis \0 tres beau"
	};

	printf("Test function STRLEN --> [ ");
	for (int i = 0; i < 4; ++i) {
		cmp = strlen(test[i]) - ft_strlen(test[i]);
		printf("%s. ", cmp ? RED : GRN);
		ret += cmp ? 1 : 0;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_isalnum() {
	int  ret = 0, cmp = 0;
	char	test[] = "\0AazZ1234-9	, &\0";

	printf("Test function ISALNUM --> [ ");
	for (int i = 0; i < 12; ++i) {
		cmp = ft_isalnum(test[i]) - isalnum(test[i]);
		printf("%s. ", cmp ? RED : GRN);
		ret += cmp ? 1 : 0;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_isalpha() {
	int		ret = 0, cmp = 0;
	char	test[] = "\0AazZ1234-9	, &\0";

	printf("Test function ISALPHA --> [ ");
	for (int i = 0; i < 12; ++i) {
		cmp = ft_isalpha(test[i]) - isalpha(test[i]);
		printf("%s. ", cmp ? RED : GRN);
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_isdigit() {
	int  ret = 0, cmp = 0;
	char	test[] = "\0AazZ1234-9	, &\0";

	printf("Test function ISDIGIT --> [ ");
	for (int i = 0; i < 12; ++i) {
		cmp = ft_isdigit(test[i]) - isdigit(test[i]);
		printf("%s. ", cmp ? RED : GRN);
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_isascii() {
	int  ret = 0, cmp = 0;
	char	test[] = {0, 1, 127, 128, 255};

	printf("Test function ISASCII --> [ ");
	for (int i = 0; i < 5; ++i) {
		cmp = ft_isascii(test[i]) - isascii(test[i]);
		printf("%s. ", cmp ? RED : GRN);
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_tolower() {
	int		ret = 0, cmp = 0;
	char	test[] = "\0AazZ1234-9	, &\0";

	printf("Test function TOLOWER --> [ ");
	for (int i = 0; i < 15; ++i) {
		cmp = ft_tolower(test[i]) - tolower(test[i]);
		printf("%s%c ", cmp ? RED : GRN, ft_tolower(test[i]));
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_toupper() {
	int		ret = 0, cmp = 0;
	char	test[] = "\0AazZ1234-9	, &\0";

	printf("Test function TOLOWER --> [ ");
	for (int i = 0; i < 15; ++i) {
		cmp = ft_toupper(test[i]) - toupper(test[i]);
		printf("%s%c ", cmp ? RED : GRN, ft_toupper(test[i]));
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

//static void		test_isprint() {
//	int  ret = 0, cmp = 0;
//	printf("Test function ISALNUM --> [ ");
//	for (int i = 0; i < 4; ++i) {
//		printf("%s. ", cmp ? RED : GRN);
//	}
//	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
//}

static void			test_ft_strcat() {
	char	*str = "";
	char	*str2 = "je suis beau";
	//printf("fake: %s\n", ft_strcat("je suis tres beau\0           ", "et tres con"));
	//printf("real: %p -- %lu -- %lu -- %p -- %p\n", str, strlen(str), ft_strlen(str), "", "");
	printf("real: %s\n", strcat(str, str2));
	//printf("fake: %s\n", ft_strcat(str, str2));
	//printf("real: %s\n", str);
	//printf("fake: %s\n", ft_strcat(str, str2));
}

int		main(void)
{
	test_bzero();
	test_strlen();
	test_isalnum();
	test_isalpha();
	test_isdigit();
	test_isascii();
	test_tolower();
	test_toupper();
	test_ft_strcat();
	return (0);
}
