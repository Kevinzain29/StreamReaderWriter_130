
#include <fstream>
#include <iostream>
using namespace std;

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
		//loop
	}
}