#include<iostream>
#include<conio.h>
using namespace std;

struct TNode {
	int data;
	TNode *next;
};

struct Queue {
	int front, rear, data[25];
} Q;

TNode* head;
	
void init() {
	head = NULL;
}

int isEmpty() {
	if(head == NULL)
		return 1;
	else
	return 0;
}

void push(int inputan) {
	TNode *baru;
	baru = new TNode;
	baru->data = inputan;
	baru->next = head;
	head = baru;
}

void pop() {
	TNode *bantu;
	int data;
	 
	if (isEmpty() == 0) {
		bantu = head;
		data = bantu -> data;
		head = head -> next;
		delete bantu;
	} else
		cout<<"Data kosong\n";
}

void printstack() {
	TNode *bantu;
	bantu = head;
	
	if (isEmpty() == 0) {
		while (bantu != NULL) {
			cout<<bantu->data;
			cout<<endl;
			bantu = bantu->next;
		}
	} else
		cout<<"Data kosong\n";
}

void printqueue() {
	TNode *bantu;
	bantu = head;
	
	if (isEmpty() == 0) {
		while (bantu != NULL) {
			cout<<" "<<bantu->data;
			bantu = bantu->next;
		}
	} else
		cout<<"Data kosong\n";
}

void clear() {
	TNode *bantu, *hapus;
	bantu = head;
	
	if (isEmpty() == 0) {
		while(bantu != NULL) {
			hapus = bantu;
			bantu = bantu->next;
			delete hapus;
		}
		
		head = NULL;
	} else
		cout<<"Data kosong\n";
}

void mainstack() {
	int inputan, menu;
	
	do {
		cout<<" ____________________ \n";
		cout<<"| MENU PROGRAM STACK |\n";
		cout<<"|____________________|\n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Clear\n";
		cout<<"4. Print\n";
		cout<<"5. Exit\n";
		cout<<"menu : ";
		cin>>menu;
	
		if (menu < 1 || menu > 5) {
			cout<<"\n Maaf..pilihan anda salah!!! tolong ulangi lagi!!\n\n";
		} else {
			switch (menu) {
				case 1 : {
					cout<<"Masukkan data= ";
					cin>>inputan;
					push(inputan);
					cout<<endl<<endl;
				}
			
				break;
				case 2 : {
					cout<<endl;
					pop();
					cout<<endl;
				}
			
				break;
				case 3 : {
					cout<<endl;
					clear();
					cout<<endl;
				}
			
				break;
				case 4 : {
					cout<<endl;
					printstack();
					cout<<endl;
				}
	
				break;
			}
		}
	}
	while (menu != 5);
		
		clear();
}

void printQueue() {
	cout << "QUEUE : ";
	for (int i = Q.front; i < Q.rear; i++)
	//menambahkan koma jika data tidak terdapat di antrian pertama
		cout << Q.data[i] << ((Q.rear-1 == i) ? "" : ",");
	cout << endl;
}

void enqueue() {
		int data;
		//menambahkan data ke antrian
		cout << "Masukkan Data= ";cin >> data;
		Q.data[Q.rear] = data;
		//menempatkan tail pada elemen data terakhir yang ditambahkan
		Q.rear++;
		cout << "Data ditambahkan\n";
		printQueue();
	
}

void mainqueue() {
	int inputan, menu;
	
	do {
		cout<<" ____________________ \n";
		cout<<"| MENU PROGRAM QUEUE |\n";
		cout<<"|____________________|\n";
		cout<<"1. Push\n";
		cout<<"4. Print\n";
		cout<<"5. Exit\n";
		cout<<"menu : ";
		cin>>menu;
	
		if (menu < 1 || menu > 5) {
			cout<<"\n Maaf..pilihan anda salah!!! tolong ulangi lagi!!\n\n";
		} else {
			switch (menu) {
				case 1 : {					
					enqueue();
					cout<<endl<<endl;
				}
			
				break;
				case 2 : {
					cout<<endl;
					pop();
					cout<<endl;
				}
			
				break;
				case 3 : {
					cout<<endl;
					clear();
					cout<<endl;
				}
			
				break;
				case 4 : {
					cout<<endl;
					printQueue();
					cout<<endl;
				}
	
				break;
			}
		}
	}
	while (menu != 5);
		
		clear();
}

int main() {
	int menu;
	
	do {
		cout<<" MENU UTAMA "<<endl;
		cout<<"___________________\n";
		cout<<"1. Program Stack \n";
		cout<<"2. Program Queue \n";
		cout<<"3. Exit \n";
		cout<<endl;
		cout<<"____________________________________\n";
		cout<<"Silahkan masukan pilihan anda : ";
		cin>>menu;
		cout<<endl;
		
		if (menu < 1 || menu > 4) {
			cout<<"\n Maaf..pilihan anda salah... tolong ulangi lagi..\n\n";
		} else {
			switch (menu) {
				case 1 : {
					cout<<endl<<endl;
					mainstack();
					cout<<endl<<endl;
				}
				
				break;
				
				case 2 : {
					cout<<endl<<endl;
					mainqueue();
					cout<<endl<<endl;
				}
				
				break;
			}
		}
	}
		while(menu != 4);
}
