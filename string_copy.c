#include <stdio.h>
#include <string.h>

int main()
{
	char * src = "Raul";
	char dst[20] = "No veras esto nunca";

	strcpy(dst, src);

	printf("dst = %s\n", dst);

	return 0;
}
