#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140095";
	mhs1.nama = "fahrizal";
	mhs1.alamat = "lampung";
	mhs1.umur = 20;

	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukkan umur: ";
	cin >> mhs2.umur;
	cout << "Masukkan nama: ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat: ";
	cin >> mhs2.alamat;


	cout << "\nNim : " << mhs1.nim;
	cout << "\numur : " << mhs1.umur;
	cout << "\nnama : " << mhs1.nama;
	cout << "\nalamat : " << mhs1.alamat;


	cout << "\nNim : " << mhs2.nim;
	cout << "\numur : " << mhs2.umur;
	cout << "\nnama : " << mhs2.nama;
	cout << "\nalamat : " << mhs2.alamat;

}



