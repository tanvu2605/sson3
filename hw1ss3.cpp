#include <stdio.h>
int main(){
	//Khai bao va khoi tao cac bien canh hinh vuong, chieu dai va chieu rong cua hinh chu nhat, ban kinh duong tron
	float side, length, width, radius;
	//Khai bao hang so PI kieu du lieu float co gia tri la 3.14
	const float PI = 3.14;
	//Tinh chu vi va dien tich cua hinh vuong
	float perimeter_of_square = side * 4;
	float area_of_square = side * side;
	//Tinh chu vi va dien tich cua hinh chu nhat
	float perimeter_of_rectangle = (length + width) * 2;
	float area_of_rectangle = length * width;
	//Tinh chu vi va dien tich cua hinh tron
	float perimeter_of_circle = 2 * PI * radius;
	float area_of_circle = 2 * PI * radius * radius;
	
	
	
} 
