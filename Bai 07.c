#include<stdio.h>

int main(){
	int n, i, j;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	i=1;
	j=0;
	printf("Cac uoc cua n là: ");
	while (i<=n) {
		if(n%i==0) {
			printf(" %d ",i);
			j++;
		}
		i++;
	} printf("\nTong so uoc la: %d",j);
	return 0;
}

