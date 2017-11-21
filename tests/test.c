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
	int  ret = 0, cmp = 0, i;
	char	*test[4] = {
		"",
		"\0",
		"je suis tres beau",
		"je suis \0 tres beau"
	};

	printf("Test function STRLEN --> [ ");
	for (i = 0; i < 4; ++i) {
		cmp = strlen(test[i]) - ft_strlen(test[i]);
		printf("%s%lu ", cmp ? RED : GRN, ft_strlen(test[i]));
		ret += cmp ? 1 : 0;
	}
	cmp = strlen(test[i - 1]) - ft_strlen(test[i - 1]);
	printf("%s. ", cmp ? RED : GRN);
	ret += cmp ? 1 : 0;
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
		ret += cmp ? 1 : 0;
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
		ret += cmp ? 1 : 0;
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
		ret += cmp ? 1 : 0;
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
		ret += cmp ? 1 : 0;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_toupper() {
	int		ret = 0, cmp = 0;
	char	test[] = "\0AazZ1234-9	, &\0";

	printf("Test function TOUPPER --> [ ");
	for (int i = 0; i < 15; ++i) {
		cmp = ft_toupper(test[i]) - toupper(test[i]);
		printf("%s%c ", cmp ? RED : GRN, ft_toupper(test[i]));
		ret += cmp ? 1 : 0;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void			test_ft_strcat() {
	char	str[50] = "";
	char	*str2 = "je suis beau";
	
	//printf("fake: %s\n", ft_strcat("je suis tres beau\0           ", "et tres con"));
	//printf("real: %p -- %lu -- %lu -- %p -- %p\n", str, strlen(str), ft_strlen(str), "", "");
	printf("real: %s\n", strcat(str, str2));
	//printf("fake: %s\n", ft_strcat(str, str2));
	//printf("real: %s\n", str);
	//printf("fake: %s\n", ft_strcat(str, str2));
}

static void		test_puts() {
	char	*test[4] = {
		NULL,
		"suis",
		"tres",
		"beau \0 et tres laid\n"
	};
	int		ret = 0, cmp = 0;

	printf("Test function PUTS -->\n");
	for (int i = 0; i < 4; ++i) {
		printf("\t%sstdio puts --> ", MAG);
		cmp = puts(test[i]);
		write(1, BLU, 5);
		write(1, "\tmy puts -->    ", 16);
		cmp -= ft_puts(test[i]);
		ret += cmp ? 1 : 0;
		cmp = 0;
	}
	printf("\t%sFunction return value --> [%s]%s\n", ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_memset() {
	char	test[10] = "12345678";
	char	test2[10] = "12345678";
	int		ret = 0, cmp = 0;

	printf("Test function MEMSET --> [ ");
	for (int i = 0; i < 7; i++) {
		cmp = strcmp(memset((void*)test, 60 + i * 10, 7 - i), ft_memset((void*)test2, 60 + i * 10, 7 - i));
		printf("%s%s ", cmp ? RED : GRN, test);
		ret += cmp ? 1 : 0;
		cmp = 0;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_memcpy() {
	char	test[10] = "";
	char	test_bis[10] = "";
	char	*test2[10] = {
		"12345678",
		"je",
		"suis",
		"tres",
		"\0beau"
	};
	int		ret = 0, cmp = 0;

	printf("Test function MEMCPY --> [ ");
	for (int i = 0; i < 5; i++) {
		cmp = strcmp(ft_memcpy((void*)test, test2[i], strlen(test2[i])), memcpy((void*)test_bis, test2[i], strlen(test2[i])));
		printf("%s\"%s\" ", cmp ? RED : GRN, test);
		ret += cmp ? 1 : 0;
		cmp = 0;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_strdup() {
	char	*test = NULL;
	char	*test2[10] = {
		"12345678",
		"je",
		"suis",
		"tres",
		"\0beau"
	};
	int		ret = 0, cmp = 0;

	printf("Test function STRDUP --> [ ");
	for (int i = 0; i < 5; i++) {
		cmp = strcmp((test = ft_strdup(test2[i])), test2[i]);
		printf("%s\"%s\" ", cmp ? RED : GRN, test);
		ret += cmp ? 1 : 0;
		cmp = 0;
		free(test);
		test = NULL;
	}
	printf("%s] %s[%s]%s\n", NRM, ret ? RED : GRN, ret ? " " : "X", NRM);
}

static void		test_cat() {
	int		fd;

	fd = open("Makefile", O_RDONLY);
	printf("FD == %d\n", fd);
	ft_cat(fd);
	close(fd);
}

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
	test_isalpha();
	test_isdigit();
	test_isascii();
	test_tolower();
	test_toupper();
	test_ft_strcat();
	test_puts();
	test_memset();
	test_memcpy();
	test_strdup();
	test_cat();
	return (0);
}
