#include <stdio.h>
#include <stdlib.h>

int main(){
	char a;
	int	 b;
	float c;
	scanf("%c %d %f", &a, &b, &c);
	
	printf("ESPAÇOS   => %c %d %f\n\n", a, b, c);
	printf("TABULACAO => %c \t %d \t %f\n\n", a, b, c);
	printf("EM CADA LINHA => \n %c\n %d\n %f \n", a, b, c);
	return 0;
}
