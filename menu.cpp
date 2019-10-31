#include <conio.h>
#include <iostream>
using namespace std;

void daftarMenu();
void dataTransaksi(char pembeli[40], int kodeTransaksi, int jmlUang, char jnsPembayaran[40], int noMeja, int totalBayar);
void diskonVIP(int total, char pembeli[40], int kodeTransaksi, int jmlUang, char jnsPembayaran[40], int noMeja);
void diskonNonVIP(int total, char pembeli[40], int kodeTransaksi, int jmlUang, char jnsPembayaran[40], int noMeja);
void mainMenu(int member);
void caridata();

int main() {
    mulai:
    system("cls");
    int select;

    cout<<"-------Menu Utama-------\n";
    cout<<" 1. Tamu VIP\n";
    cout<<" 2. Tamu non-VIP\n";
    cout<<" 3. Pencarian Transaski\n";
    cout<<"Masukan pilihan= ";
	cin>>select;

    switch (select) {
    	case 1:
	    	system("cls");
	    	mainMenu(1);
	    	getch();

	    case 2:
	    	system("cls");
	    	mainMenu(0);
	    	getch();
	    	
	    case 3:
	    	system("cls");
	    	caridata();
	    	getch();

	    default:
	    	system("cls");
			cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar, [enter]";
	    	getch();
	    	goto mulai;
    }

    getch();
    return 0;
}

void daftarMenu() {
    cout<<"-----Makanan       |  Harga-----\n";
    cout<<" 1. Ayam Gepuk     | Rp.55.000\n";
    cout<<" 2. Ice Thai Tea   | Rp.20.000\n";
    cout<<" 3. Paket Lengkap  | Rp.80.000\n";
    cout<<" 4. Paket Super XL | Rp.90.000\n";
}

void dataTransaksi(char pembeli[40], int kodeTransaksi, int jmlUang, char jnsPembayaran[40], int noMeja, int totalBayar) {
	int kembalian, select;
	char filepath[256];
	FILE * file;
	
	cout<<"-------- Data Pembelian --------\n";
	cout<<"Kode Transaksi: ";
	cin>>kodeTransaksi;
	cout<<"Nama Pelanggan (tanpa spasi): ";
	cin>>pembeli;
	cout<<"No Meja: ";
	cin>>noMeja;
	cout<<"Jenis Pembayaran: ";
	cin>>jnsPembayaran;
	cout<<"Jumlah Bayar: ";
	cin>>jmlUang;
	
	kembalian = jmlUang - totalBayar;
	
	snprintf (filepath, sizeof(filepath), "%d.txt", kodeTransaksi);
	file = fopen(filepath, "w");
	fprintf(file, "Kode Transaksi: %d \n", kodeTransaksi);
	fprintf(file, "Nama Pelanggan: %s \n", pembeli);
	fprintf(file, "Total Bayar: Rp.%d\n", totalBayar);
	fprintf(file, "Jenis Pembayaran: %s \n", jnsPembayaran);
	fprintf(file, "Nomor Meja: %d \n", noMeja);
	fprintf(file, "Jumlah Uang: Rp.%d \n", jmlUang);
	fprintf(file, "Kembalian: Rp.%d \n", kembalian);
	fclose (file);
	
	cout<<"\n\nData Tersimpan\n";
	cout<<"9 untuk kembali ke menu utaman= ";
	cin>>select;
	
	getch();
	switch (select) {
    	case 9:
    		system("cls");
			main();
			getch();
    	
    	default:
    	cout<<"Kode yang anda masukkan tidak ada";
    }
}

void diskonVIP(int total, char pembeli[40], int kodeTransaksi, int jmlUang, char jnsPembayaran[40], int noMeja) {
	int totalBayar;
	
	if(total > 700000 && total < 1200000) {
		totalBayar = total - (total * 0.07);
		cout<<"Diskon VIP 7%, total bayar: "<<totalBayar<<"\n"<<endl;
	} else if(total > 1200000 && total < 3000000) {
		totalBayar = total - (total * 0.12);
		cout<<"Diskon VIP 12%, total bayar: "<<totalBayar<<"\n"<<endl;
	} else if(total > 3000000) {
		totalBayar = total - (total * 0.17);
		cout<<"Diskon VIP 17%, total bayar: "<<totalBayar<<"\n"<<endl;
	} else {
		totalBayar = total;
		cout<<"Diskon 0, total bayar: "<<total<<"\n"<<endl;
	}
	
	dataTransaksi(pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja, totalBayar);
}

void diskonNonVIP(int total, char pembeli[40], int kodeTransaksi, int jmlUang, char jnsPembayaran[40], int noMeja) {
	int totalBayar;
	
	if(total > 1000000 && total < 1500000) {
		totalBayar = total - (total * 0.05);
		cout<<"Diskon 5%, total bayar: "<<totalBayar<<"\n"<<endl;
	} else if(total > 1500000) {
		totalBayar = total - (total * 0.1);
		cout<<"Diskon 10%, total bayar: "<<totalBayar<<endl;
		cout<<"Anda mendapatkan VIP member\n\n";
	} else {
		totalBayar = total;
		cout<<"Diskon 0, total bayar: "<<total<<"\n"<<endl;
	}
	
	dataTransaksi(pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja, totalBayar);
}

void mainMenu(int member) {
	int select, harga, jumlah, total, kodeTransaksi, jmlUang, noMeja;
	char pembeli[40], jnsPembayaran[40];
	
	daftarMenu();
    cout<<"Masukan pilihan= ";
	cin>>select;
	
	switch (select) {
    	case 1:
    		cout<<'\n'<<"Ayam Gepuk"<<endl;
        	harga=55000;
        	cout<<"Masukkan jumlah: ";
			cin>>jumlah;
            
			total = harga * jumlah;
    		cout<<"Total: Rp. "<<total<<endl;
    		
    		if(member == 1) {
    			diskonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			} else {
				diskonNonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			}
		
	    	getch();
	    	
	    case 2:
    		cout<<'\n'<<"Ice Thai Tea"<<endl;
        	harga=20000;
        	cout<<"Masukkan jumlah: ";
			cin>>jumlah;
            
			total = harga * jumlah;
    		cout<<"Total: Rp. "<<total<<endl;
    		
			if(member == 1) {
    			diskonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			} else {
				diskonNonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			}
			
	    	getch();
	    	break;
	    	
	    case 3:
    		cout<<'\n'<<"Paket Lengkap"<<endl;
        	harga=30000;
        	cout<<"Masukkan jumlah: ";
			cin>>jumlah;
            
			total = harga * jumlah;
    		cout<<"Total: Rp. "<<total<<endl;
    		
			if(member == 1) {
    			diskonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			} else {
				diskonNonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			}
			
	    	getch();
	    	break;
	    	
	    case 4:
    		cout<<'\n'<<"Paket Super XL"<<endl;
        	harga=90000;
        	cout<<"Masukkan jumlah: ";
			cin>>jumlah;
            
			total = harga * jumlah;
    		cout<<"Total: Rp. "<<total<<endl;
    		
			if(member == 1) {
    			diskonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			} else {
				diskonNonVIP(total, pembeli, kodeTransaksi, jmlUang, jnsPembayaran, noMeja);
			}
			
	    	getch();
	    	break;
    	
    	default:
    	cout<<"Kode yang anda masukkan tidak ada";
    }
}

void caridata() {
	int c, kodeTransaksi;
	FILE * file;
	char filepath[256];
	
	cout<<"-------- Cari Data Pembelian --------\n";
	cout<<"Masukan kode transaksi: ";
	cin>>kodeTransaksi;
	
	snprintf (filepath, sizeof(filepath), "%d.txt", kodeTransaksi);
	file = fopen(filepath, "r");
	
	if (file) {
		while ((c = getc(file)) != EOF)
			putchar(c);
		fclose(file);
	}
}
