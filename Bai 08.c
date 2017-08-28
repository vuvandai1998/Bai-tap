#include<stdio.h>

int main(){
	int a, b, i, j, max, min;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	
	i=1;
	max=0;
	while (i<=a && i<=b) {
		while (i<=a && i<=b) {
			if (a%i==0 && b%i==0)
				if (i>max) {
					max=i;
				}
			break;	
		}
		i++;
	} printf("Uoc chung lon nhat la: %d",max);
	
	j=1;
	min=a*b;
	while (j>=a && j>=b) {
		while (j>=a && j>=b) {
			if (j%a==0 && j%b==0)
				if (j<min) {
					min=j;
				}
			break;
		}
		j++;
	} printf("\nBoi chung nho nhat la: %d",min);
	return 0;
}

