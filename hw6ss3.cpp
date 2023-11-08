#include <stdio.h>
int main(){
	int namSinh, tuoi, chan, le;
	
	printf("nhap vao nam sinh cua ban: ");
	scanf("%d", &namSinh);
	
	tuoi = 2023 - namSinh;
	
    printf("tuoi cua ban la: %d\n", tuoi);
    printf("tuoi cua ban la: %s\n", (tuoi % 2 == 0) ? "chan" : "le");
}
