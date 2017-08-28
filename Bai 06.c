#include<stdio.h>

int main(){
	int n, i, s;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	s=0;
	i=1;
	while (i<=n) {
		if (i%7==0) {
			s=s+i;
		}
		i++;
	} printf("S = %d",s);
	return 0;
}

