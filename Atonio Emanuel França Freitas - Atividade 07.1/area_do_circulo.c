#include <stdio.h>

int main(){
    int n, j, i;
    char num[101];
    int leds;
    
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
            scanf("%s", &num);
            j = 0;
            leds = 0;
    	for(j=0; ; j++){
    		if(num[j] == '\0'){	break;}
			if(num[j] == '0'){leds+=6;}
			if(num[j] == '1') leds += 2;
            if(num[j] == '2') leds += 5;
            if(num[j] == '3') leds += 5;
            if(num[j] == '4') leds += 4;
            if(num[j] == '5') leds += 5;
            if(num[j] == '6') leds += 6;
            if(num[j] == '7') leds += 3;
            if(num[j] == '8') leds += 7;
            if(num[j] == '9') leds += 6;
		}
            printf("%d leds\n", leds);
    }
    return 0;
}



