#include<stdio.h>
typedef struct {
	char Hoten[100];
	char Quequan[100];
	float toan, ly, hoa;
	float diem;
} Thi_sinh;
void Nhap(int n, Thi_sinh ts[100]){
	printf("Nhap so thi sinh: ");
	scanf("%d",&n);
	for(int i;i<n;i++){
		printf("\nNhap thong tin thi sinh: %d",i+1);
		printf("\nNhap ho va ten: ");
		fflush(stdin);
		gets(ts[i].Hoten);
		printf("\nNhap que quan: ");
		fflush(stdin);
		gets(ts[i].Quequan);
		printf("\nNhap diem Toan Ly Hoa: ");
		scanf("%f %f %f",&ts[i].toan,ts[i].ly,ts[i].hoa);
	}
}
void Xuat(int n, Thi_sinh ts[100]){
	printf("\nDanh sach thi sinh: ");
	Nhap(n,ts[100]);	
}
int main(){

}
