#include <stdio.h>

int main(){
	int a;
  	scanf("%d", &a);
  	int n = a;
  	int b = 0;
  	while(n){
      	b *= 10;
    	b += n % 10;
      	n /= 10;
    }
  	if(b == a){
    	printf("yes\n");
    }else{
    	printf("no\n");
    }
	return 0;
}