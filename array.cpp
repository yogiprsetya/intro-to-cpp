#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

void latihanSatu() {
	int i, x, n, a[10];
	
	n = 5;
	x = 0;
	
	cout << "\n\nLatihan 1:\n";
	
	for (i = 1; i <= 10; i++) {
		a[i] = n + x;
		x += 3;
		
		cout << i << ':' << a[i] << '\n';
	}
}

void contohSembilan() {
	int i, x, n, a[10];
	
	n = 5;
	x = 0;
	
	cout << "\n\nContoh 9:\n";
	
	for (i = 0; i <= 10; i++) {
		a[i] = n + x;
		
		x += 3;
		cout << i << ':' << a[i] << '\n';
	}
}

void contohSepuluh() {
	int i, x, n, z, a[10];
	
	n = 5;
	x = 3;
	
	cout << "\n\nContoh 10:\n";
	
	for (i = 0; i < 10; i++) {
		a[i] = n;
		
		n += x;
		x += 2;
		
		cout << i << ':' << a[i] << '\n';
	}
}

void contohTerakhir() {
	int i, x, n, a[10];
	
	n = 200;
	x = -5;
	
	cout << "\n\nContoh Terakhir:\n";
	
	for (i = 0; i < 10; i++) {
		a[i] = n;
		
		n += x;
		x -= 5;
		
		cout << i << ':' << a[i] << '\n';
	}
}

main() {
	latihanSatu();
	contohSembilan();
	contohSepuluh();
	contohTerakhir();
}
