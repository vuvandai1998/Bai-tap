#include<stdio.h>

int main(){
	int n, i, j;
	printf("n = ");
	scanf("%d",&n);
	
	i=1;
	j=0;
	while (i<=n) {
			j=j+i;
			i=i+1;
	}
	printf("%d",j);
	return 0;
}

