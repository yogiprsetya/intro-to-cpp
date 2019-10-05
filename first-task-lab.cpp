#include <iostream>

void soalSatu() {
	int i, n;
	
	n = 1;
	
	std::cout << "Soal 1:";
	
	for(i=1; i <= 10; i++) {
		std::cout << "\n" << n;
		n *= 2;
	}
}

void soalDua() {
	int i, n;
	
	n = 5;
	
	std::cout << "\n\nSoal 2:";
	
	for(i=1; i <= 10; i++) {
		std::cout << "\n" << n;
		
		n += 3;
	}
}

void soalTiga() {
	int i, n, x;
	
	n = 5;
	x = 3;
	
	std::cout << "\n\nSoal 3:";
	
	for(i=1; i <= 10; i++) {
		std::cout << "\n" << n;
		
		n += x;
		x += 2;
	}
}

main() {	
	soalSatu();
	soalDua();
	soalTiga();
}
