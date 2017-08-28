#include<stdio.h>

int main(){
	int n, i, j;
	printf("n = ");
	scanf("%d",&n);
	
	i=1;
	j=1;
	printf("Cac so chan la:");
	while (i<n) {
			if (i%2==0) printf(" %d ",i);
			i++;
	}
	printf("\nCac so le la:");
	while (j<n) {
			if (j%2!=0) printf(" %d ",j);
			j++;
	}
	return 0;
}

