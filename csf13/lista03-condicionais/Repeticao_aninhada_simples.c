#include <stdio.h>

int main(){
	int a, b;
	for (a = 1; a <= 7; a++){
		printf("Dia %d:", a);
		for (b = 1; b < 5; b++){
			printf("Eu me repito quando sob stress.\n");
		}
		printf("\n");
	}
	return 0;
}