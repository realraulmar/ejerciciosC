/**Desafio 2
 * Crear un programa que reciba cadenas de caracteres por linea de comando
 * y emita la cadena más larga
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
	int currentLongestStringLen, argvLen;
	char currentLongestString[100] = "";

	for(int i = 1; i < argc; i++) {
		currentLongestStringLen = strlen(currentLongestString);
		argvLen = strlen(argv[i]);
		
		printf("Longitud de currentLongestString = %d y de argv[%d] = %d\n", currentLongestStringLen, i, argvLen);

		if(currentLongestStringLen < argvLen) {
		strcpy(currentLongestString, argv[i]);
		}
	}

	printf("La cadena mas larga ha sido: %s\n", currentLongestString);

	return 0;
}
