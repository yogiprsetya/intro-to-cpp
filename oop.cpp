#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class penduduk {
	public:
		void setNama(char*);
		void setNIK(char*);
		void setTempLahir(char*);
		void setTahunLahir(char*);
		void setGender(char*);
		void setGolDar(char*);
		void setProfesi(char*);
		char* getNama();
		char* getNIK();
		char* getTempLahir();
		char* getTahunLahir();
		char* getGender();
		char* getGolDar();
		char* getProfesi();
	
	private:
		char* nama;
		char* nik;
		char* tempLahir;
		char* tahunLahir;
		char* gender;
		char* goldar;
		char* profesi;
};

void penduduk::setNama(char* nama) {
	this->nama=nama;
}

void penduduk::setNIK(char* NIK) {
	this->nik=NIK;
}

void penduduk::setTempLahir(char* TempLahir) {
	this->tempLahir=TempLahir;
}

void penduduk::setTahunLahir(char* TahunLahir) {
	this->tahunLahir=TahunLahir;
}

void penduduk::setGender(char* Gender) {
	this->gender=Gender;
}

void penduduk::setGolDar(char* Goldar) {
	this->goldar=Goldar;
}

void penduduk::setProfesi(char* Profesi) {
	this->profesi=Profesi;
}

char* penduduk::getNama() {
	return nama;
}

char* penduduk::getNIK(){
	return nik;
}

char* penduduk::getTempLahir(){
	return tempLahir;
}

char* penduduk::getTahunLahir(){
	return tahunLahir;
}

char* penduduk::getGender(){
	return gender;
}

char* penduduk::getGolDar(){
	return goldar;
}

char* penduduk::getProfesi(){
	return profesi;
}

main() {
	mulai:
	int select, num;
	penduduk Data;
	char NAMA[20], NIK[20], TempLahir[20], TahunLahir[5], Gender[2], GolDar[3], Profesi[55];
	
	cout<<"-------Menu Utama-------\n";
    cout<<" 1. Input data baru\n";
    cout<<" 2. Cari data\n";
    cout<<"Masukan pilihan= ";
	cin>>select;

	switch (select) {
    	case 1:
	    	system("cls");
	    	cout<<"Input data \n";	
			cout<<"Nama = ";
			cin>>NAMA;
			cout<<"NIK = ";
			cin>>NIK;
			cout<<"Tempat Lahir (Kab/kota) = ";
			cin>>TempLahir;
			cout<<"Tahun Lahir (4digit) = ";
			cin>>TahunLahir;
			cout<<"Jenis Kelamin (L/P) = ";
			cin>>Gender;
			cout<<"Golongan Darah = ";
			cin>>GolDar;
			cout<<"Bidang Pekerjaan = ";
			cin>>Profesi;
			
			Data.setNama(NAMA);
			Data.setNIK(NIK);
			Data.setTempLahir(TempLahir);
			Data.setTahunLahir(TahunLahir);
			Data.setGender(Gender);
			Data.setGolDar(GolDar);
			Data.setProfesi(Profesi);
			
			system("cls");
			cout<<"Nama: "<<Data.getNama()<<endl;
			cout<<"Nomor NIK: "<<Data.getNIK()<<endl;
			cout<<"Tempat Lahir: "<<Data.getTempLahir()<<endl;
			cout<<"Tahun Lahir: "<<Data.getTahunLahir()<<endl;
			cout<<"Jenis Kelamin: "<<Data.getGender()<<endl;
			cout<<"Golongan Darah: "<<Data.getGolDar()<<endl;
			cout<<"Bidang Pekerjaan: "<<Data.getProfesi()<<endl;

			cout<<"\n\n9. Simpan ?";
			cout<<"\n0. Buat baru ?\n";
			cin>>num;
			
			switch(num) {
			    case 9:
			    	system("cls");
	    	
			    	char filepath[256];
					FILE * file;
			    	
			    	snprintf (filepath, sizeof(filepath), "%s.txt", Data.getNIK());
					file = fopen(filepath, "w");
					fprintf(file, "Nama: %s \n", Data.getNama());
					fprintf(file, "Nomor NIK: %s \n", Data.getNIK());
					fprintf(file, "Tempat Lahir: %s \n", Data.getTempLahir());
					fprintf(file, "Tahun Lahir: %s \n", Data.getTahunLahir());
					fprintf(file, "Jenis Kelamin: %s \n", Data.getGender());
					fprintf(file, "Golongan Darah: %s \n", Data.getGolDar());
					fprintf(file, "Bidang Pekerjaan: %s \n", Data.getProfesi());
					fclose (file);
					cout<<"Data tersimpan. Input 5 untuk kembali kemenu utama: ";
					cin>>num;
			    
			    case 5:
			    	goto mulai;
			      
			    default:
			    system("cls");
			    select = 1;
			}
			
	    	getch();

	    case 2:
	    	system("cls");
			int c, nik;
			FILE * file;
			char filepath[256];
			
			cout<<"-------- Cari Data --------\n";
			cout<<"Masukan NIK: ";
			cin>>nik;
			
			snprintf (filepath, sizeof(filepath), "%d.txt", nik);
			file = fopen(filepath, "r");
			system("cls");
			if (file) {
				while ((c = getc(file)) != EOF)
					putchar(c);
				fclose(file);
			}
	    	getch();

	    default:
	    	system("cls");
			cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar, [enter]";
	    	getch();
	    	goto mulai;
    }
}
