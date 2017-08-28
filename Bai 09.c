#include<stdio.h>

int main(){
	int n, i, j;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	i=2;
	j=0;
	while (i<n) {
		while (i<n) {
			if (n%i==0) {
				j=j+1;
			} 
		break;
		}
		i=i+1;
	} 
	if (j>0) { printf("%d khong la so nguyen to",n);
	} else printf("%d la so nguyen to",n);
	
	return 0;
}

