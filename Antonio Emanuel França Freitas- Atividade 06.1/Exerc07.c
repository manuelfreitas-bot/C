#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2;
		printf("Digite dois  valores  inteiros : ");
	scanf("%d %d", &n1, &n2);
	
	if(n1 % n2 == 0){
		printf("%d e divisivel por %d ",n1 ,n2);
	}else{
		printf("%d nao e divisivel por %d", n1, n2);
	}
	return 0;
}
