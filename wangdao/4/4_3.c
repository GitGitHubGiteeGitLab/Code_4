#include <stdio.h>

int main(){
  	int count = 0;
  	for(int i = 1; i <= 10; i++)
    	for(int j = 1; j <= 20; j++)
        	for(int k = 1; k <= 37; k++)
              	for(int m = 1; m <= 37; m++)
                	if(i * 10 + j * 5 + 2 * k + 1 * m == 100
                    && i + j + k + m == 40)++count;
  	printf("%d\n", count);
	return 0;
}