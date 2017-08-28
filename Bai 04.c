#include<stdio.h>

int main(){
	int n, i, j, k, s, s1, s2;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	s=0;
	i=1;
	while (i<=n) {
			s=s+i;
			i++;
	} printf("S = %d",s);
	
	s1=0;
	j=1;
	while (j<=n) {
			if (j%2!=0) {
				s1=s1+j;
			}
			j++;
	} printf("\nS1 = %d",s1);
	
	s2=0;
	k=1;
	while (k<=n) {
			if (k%2==0) {
				s2=s2+k;
			}
			k++;
	} printf("\nS2 = %d",s2);
	

	return 0;
}

