#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print_error(void);
int parse_int(const char *str);
int multiply(int x, int y);

int main(int argc, char *argv[])
{
	if (argc != 3) {
		print_error();
		return 98;
	}

	int num1 = parse_int(argv[1]);
	int num2 = parse_int(argv[2]);

	if (num1 < 0 || num2 < 0) {
		print_error();
		return 98;
	}

	int result = multiply(num1, num2);
	printf("%d\n", result);
	return 0;
}

void print_error(void)
{
	printf("Error\n");
}

int parse_int(const char *str)
{
	int result = 0;
	for (const char *p = str; *p != '\0'; p++) {
		if (!isdigit(*p)) {
			print_error();
			exit(98);
		}
		result = result * 10 + (*p - '0');
	}
	return result;
}

int multiply(int x, int y)
{
	int result = 0;
	while (y > 0) {
		if (y & 1) {
			result += x;
		}
		x <<= 1;
		y >>= 1;
	}
	return result;
}
