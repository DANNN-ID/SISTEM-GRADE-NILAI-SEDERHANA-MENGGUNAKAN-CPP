#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

void batasNilai(){
	cout << "Batas nilai hanya sampai 100. anda tidak memasuki Grade Nilai manapun.";
}
void gradeNilaiA(void) {
	cout << "Selamat anda mendapat Grade nilai A";
}
void gradeNilaiB(void) {
	cout << "Selamat anda mendapat Grade nilai B";
}
void gradeNilaiC(void) {
	cout << "Anda mendapatkan Grade nilai C, Tingkatkan lagi belajarnya !";
}

int main() {
	double ujianTengahSemester;
	double ujianAkhirSemester;
	double rataRata;
	char backToProgram;
	
	backToProgram:
	cout << "#============================================#\n\n 		SMKN 1 Bondowoso\n\n#============================================#\n\n";
	while(cout << "O> Masukan nilai Ujian Tengah Semester 	:  " && !(cin >> ujianTengahSemester)) {
		cout << "O> Message : Harap memasukan karakter berupa Angka !\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n";
	}
	while(cout << "O> Masukan nilai Ujian Akhir Semester 	:  " && !(cin >> ujianAkhirSemester)){
		cout << "O> Message : Harap memasukan karakter berupa Angka !\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	{
		rataRata = (ujianTengahSemester + ujianAkhirSemester) / 2;
		cout << "O> (" << ujianTengahSemester << " + " << ujianAkhirSemester << ") / 2";
		cout << "\n\n";
		cout << "O> Hasil : " << rataRata;
		cout << "\n\n";
		
		if(rataRata > 100) {
			batasNilai();
		}
		else if(rataRata >= 80) {
			gradeNilaiA();
		}
		else if(rataRata < 80 && rataRata >= 70) {
			gradeNilaiB();
		}
		else if(rataRata < 70) {
			gradeNilaiC();
		}
	}
	
	cout << "\n\n";
	cout << "Ingin mengulangi program ? (Y/N) : ";
	cin >> backToProgram;
	if(backToProgram == 'y' || backToProgram == 'Y') {
		system("CLS");
		goto backToProgram;
	}
	else{
		system("CLS");
		cout << "Terimakasih !";
		exit(0);
	}
}
