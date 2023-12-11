//find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	int l, w, h;
	Printf("Enter Length, Width and Height : ");
	scanf("%d %d %d", &l, &w, &h);
	int a = 2 * ((w * l) + (h * l) + (h * w));
	printf("Area Of Rectangular Prism : %d", a);
	return 0;
}
