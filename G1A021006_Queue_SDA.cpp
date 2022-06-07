//Muhammad Arya Bintang Pratama
//G1A021006
//Queue
#include <iostream>
#define MAX 26
using namespace std;

struct Queue {
	int head; 
	int tail; 
	int data[MAX];
}
Q;


bool isFull() {
	return Q.tail == MAX;
}


bool isEmpty() {
	return Q.tail == 0;
}


void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		cout << "QUEUE : ";
		for (int i = Q.head; i < Q.tail; i++)
			cout << Q.data[i] << ((Q.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}


void enqueue() {
	if (isFull())
	{
		cout << "Antrian telah penuh"<<endl;
	}
	else {
		int data;
		cout << "Masukkan data yang diinginkan : ";cin >> data;
		Q.data[Q.tail] = data;
		Q.tail++;
		cout << "Data telah ditambahkan\n";
		printQueue();
	}
}


void dequeue() {
	if (isEmpty())
	{
		cout << "Antrian kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Q.data[Q.head] << "\"..." << endl;
		for (int i = Q.head; i < Q.tail; i++)
			Q.data[i] = Q.data[i + 1];
		Q.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
        cout << "\nNama : Muhammad Arya Bintang Pratama\n NPM : G1A021006\n" <<endl;
        cout << "--------------QUEUE (ANTRIAN)-------------\n"
			<< "------------------------------------------\n\n Pilih Menu dibawah : \n"
			<< " 1. Menambahkan Data Ke Antrian \n"
			<< " 2. Mengambil Data Dari Antrian \n"
			<< " 3. Keluar \n\n"
			<< "------------------------------------------\n"
			<< "Masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "Pilihan tidak ada";
			break;
		}
	} while (choose !=3);
	return 0;
}