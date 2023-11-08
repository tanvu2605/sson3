#include <stdio.h>
int main(){
	int soNguyen, thousandDigit, hundredDigit, dozenDigit, unitDigit, tong;
	
	printf("nhap vao so nguyen co 4 chu so: ");
	scanf("%d", &soNguyen);
	
	thousandDigit = (soNguyen / 1000) %10;
	hundredDigit = (soNguyen / 100) %10;
	dozenDigit = (soNguyen / 10) %10;
	unitDigit = soNguyen %10;
	
	tong = thousandDigit + hundredDigit + dozenDigit + unitDigit;
	
	printf("day la tong: %d\n", tong);
	
	printf("dao nguoc: %d%d%d%d",unitDigit, dozenDigit, hundredDigit, thousandDigit);
}
