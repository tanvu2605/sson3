#include <stdio.h>
int main(){
//Khai bao cac mon  
	float math, literature, english, total_mark, average_mark; 
//Nhap diem
printf("nhap diem mon toan: "); 
scanf("%f", &math); 

printf("nhap diem mon van: ");
scanf("%f", &literature); 

printf("nhap diem mon anh: "); 
scanf("%f", &english);
//Tinh toan 
total_mark = math + literature + english;
average_mark = total_mark / 3;
//In ra  
printf("tong diem: %.2f\n", total_mark);
printf("diem trung binh: %.2f\n", average_mark); 
} 


