#include <stdio.h>

int main(){
 	int n;
  	scanf("%d", &n);
  	int i = 1;
  	int res = 1;
  	while(n--){
    	res *= i;
      	i++;
    }
  	printf("%d\n", res);
	return 0;
}