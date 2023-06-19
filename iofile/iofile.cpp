
#include <fstream>
#include <iostream>
using namespace std;

#include <string>

int main() {
	string baris;

	//membuka file file dalam mode menulis
	ofstream outfile;
	//menunjuk file ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_ ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter 4
		if (baris == "q") break;
		//menulis dan measukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;
	//Menunjuk ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file" << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
	}
}