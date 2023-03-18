#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cp(void);

int main(void)
{
	int ret;

	ret = cp();
	if (ret != 0) {
		fprintf(stderr, "cp failed with error %d\n", ret);
		exit(EXIT_FAILURE);
	}

	return 0;
}

int cp(void)
{
	char *s;
	int result;

	s = (char *)malloc(12);
	if (s == NULL) {
		fprintf(stderr, "malloc failed\n");
		return -1;
	}

	strcpy(s, "Best School");
	result = 0;

	free(s);

	return result;
}
