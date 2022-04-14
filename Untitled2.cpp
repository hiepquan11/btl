void Nhap2(struct giangvien &b){
	printf("\nNhap ten giang vien: ");
	fflush(stdin);
	gets(b.hoten);
	printf("\nNhap ma giang vien: ");
	scanf("%d", &b.magv);
	printf("\nNhap ngay sinh: ");
	scanf("%d",&b.ngaysinh);
}
void NhapDanhSach2(struct giangvien DS2[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap giang vien thu %d: \n", i+1);
		Nhap2(DS2[i]);
	}
}
void Nhap3(struct monhoc &c){
	printf("Nhap ten mon hoc: ");
	fflush(stdin);
	gets(c.mamonhoc);
	printf("Nhap ma mon hoc: ");
	scanf("%d",&c.tenmonhoc);
	printf("Nhap so tin chi: ");
	scanf("%d",&c.TC);
}
void NhapDanhSach3(struct monhoc DS3[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap mon hoc thu %d: \n", i+1);
		Nhap3(DS3[i]);
	}
}
void Xuat(struct sinhvien a){
	printf("\tTen sinh vien: %s\n", a.hoten);
	printf("\tMa so sinh vien: %d\n", a.masv);
	printf("\tNgay sinh: %d\n", a.ngaysinh);
	printf("\tDiem THDC va KTLT: %d%d",a.diemTHDC,a.diemKTLT);
}
void XuatDanhSach(struct sinhvien DS[], int n){
	printf("\n*****************************\n");
	for(int i=0; i<n; i++){
		printf("Thong tin sinh vien thu %d:\n",i+1);
		Xuat(DS[i]);
	}
}
void Xuat2(struct giangvien b){
	printf("\tTen giang vien: %s\n", b.hoten);
	printf("\tMa so giang vien: %d\n", b.magv);
	printf("\tNgay sinh: %d\n", b.ngaysinh);
}
void XuatDanhSach2(struct giangvien DS2[], int n){
	printf("\n*****************************\n");
	for(int i=0; i<n; i++){
		printf("Thong tin giang vien thu %d:\n",i+1);
		Xuat2(DS2[i]);
	}
}
void Xuat3(struct monhoc c){
	printf("\tTen mon hoc: %s\n", c.tenmonhoc);
	printf("\tMa mon hoc: %d\n", c.mamonhoc);
	printf("\tSo tin chi: %d\n", c.TC);
}
void XuatDanhSach3(struct monhoc DS3[], int n){
	printf("\n*****************************\n");
	for(int i=0; i<n; i++){
		printf("Thong mon hoc thu %d:\n",i+1);
		Xuat3(DS3[i]);
	}
}
