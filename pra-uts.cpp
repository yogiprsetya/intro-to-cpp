#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;

struct mahasiswa {
	char nim[12];
	char nama[50];
	char fakultas[60];
	char prodi[60];
	char matkul[60];
	float nilaiUTS;
	float nilaiUAS;
	float nilaiTugas;
	float absensi;
	float nilaiAkhir;
	char grade[3];
};

main(){
	mahasiswa mhs[12];

	int i;

	for(i=0; i < 1; i++)	{
		cout<<"Masukan NIM = ";
		cin>>mhs[i].nim;
		cout<<"Masukan Nama = ";
		cin>>mhs[i].nama;
		cout<<"Masukan Fakultas = ";
		cin>>mhs[i].fakultas;
		cout<<"Masukan Prodi = ";
		cin>>mhs[i].prodi;
		cout<<"Masukan Matkul = ";
		cin>>mhs[i].matkul;
		cout<<"Masukan Nilai UTS = ";
		cin>>mhs[i].nilaiUTS;
		cout<<"Masukan Nilai UAS = ";
		cin>>mhs[i].nilaiUAS;
		cout<<"Masukan Nilai Tugas = ";
		cin>>mhs[i].nilaiTugas;
		cout<<"Masukan Nilai Absensi = ";
		cin>>mhs[i].absensi;
		
		mhs[i].nilaiAkhir = (mhs[i].nilaiUTS*0.3) + (mhs[i].nilaiUAS*0.4) + (mhs[i].nilaiTugas*0.2) + (mhs[i].absensi*0.1);
		
		if(mhs[i].nilaiAkhir >= 95) {
			strcpy(mhs[i].grade, "A+");
		} else if(mhs[i].nilaiAkhir >= 90) {
			strcpy(mhs[i].grade, "A");
		} else if(mhs[i].nilaiAkhir >= 85) {
			strcpy(mhs[i].grade, "B+");
		} else if(mhs[i].nilaiAkhir >= 80) {
			strcpy(mhs[i].grade, "B");
		} else if(mhs[i].nilaiAkhir >= 75) {
			strcpy(mhs[i].grade, "B-");
		} else if(mhs[i].nilaiAkhir >= 70) {
			strcpy(mhs[i].grade, "C+");
		} else if(mhs[i].nilaiAkhir >= 70) {
			strcpy(mhs[i].grade, "C");
		} else if(mhs[i].nilaiAkhir >= 65) {
			strcpy(mhs[i].grade, "D");
		} else {
			strcpy(mhs[i].grade, "E");
		}
		
		cout<<endl;
	}
		
	cout<<"Data Nilai Mahasiswa"<<endl;
	
	for(i=0; i < 1; i++) {
		cout<<"Data Ke - "<<i+1<<endl;
		cout<<"NIM = "<<mhs
		[i].nim<<endl;
		cout<<"Nama = "<<mhs
		[i].nama<<endl;
		cout<<"Fakultas = "<<mhs
		[i].fakultas<<endl;
		cout<<"Prodi = "<<mhs
		[i].prodi<<endl;
		cout<<"Matkul = "<<mhs
		[i].matkul<<endl;
		cout<<"Grade = "<<mhs
		[i].grade<<endl;
		cout<<"Nilai Akhir = "<<mhs
		[i].nilaiAkhir<<endl;
		cout<<endl;
	}
	
	getch();
}
