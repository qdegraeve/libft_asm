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
	char	test[] = "AazZ0-9	, &\0";
	printf("Test function ISALNUM --> [ ");
	for (int i = 0; i < 12; ++i) {
		cmp = ft_isalnum(test[i]) - isalnum(test[i]);
		printf("%s. ", cmp ? RED : GRN);
		ret += cmp ? 1 : 0;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

//static void		test_isalpha() {
//	int  ret = 0, cmp = 0;
//	printf("Test function ISALNUM --> [ ");
//	for (int i = 0; i < 4; ++i) {
//		printf("%s. ", cmp ? RED : GRN);
//	}
//	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
//}
//
//static void		test_isdigit() {
//	int  ret = 0, cmp = 0;
//	printf("Test function ISALNUM --> [ ");
//	for (int i = 0; i < 4; ++i) {
//		printf("%s. ", cmp ? RED : GRN);
//	}
//	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
//}
//
//static void		test_isascii() {
//	int  ret = 0, cmp = 0;
//	printf("Test function ISALNUM --> [ ");
//	for (int i = 0; i < 4; ++i) {
//		printf("%s. ", cmp ? RED : GRN);
//	}
//	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
//}
//
//static void		test_isprint() {
//	int  ret = 0, cmp = 0;
//	printf("Test function ISALNUM --> [ ");
//	for (int i = 0; i < 4; ++i) {
//		printf("%s. ", cmp ? RED : GRN);
//	}
//	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
//}

int		main(void)
{
	test_bzero();
	test_strlen();
	test_isalnum();
	return (0);
}
