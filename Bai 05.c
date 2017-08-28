#include<stdio.h>

int main(){
	int n, i, s, s1;
	printf("Nhap n = ");
	scanf("%d",&n);
	s=0;
	s1=1;
	i=1;
	while (i<=n) {
		while (i<=n) {
			s1=s1*i;
			i++;
			break;
		}
		s=s+s1;
	} printf("S = %d",s);
	
	return 0;
}

