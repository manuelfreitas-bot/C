#include <stdio.h>
int main (){
	int a , b, res;
	printf("Digite um valor :\n");
	scanf("%d", &a);
	printf("Digite outro valor: \n");
	scanf("%d", &b);
	res = soma(a, b);

	return 0;
}

void soma(int x, int y){
	int cal;
	cal = x + y;
	printf("\nO valor de %d e %d e %d", x, y, cal);
}
