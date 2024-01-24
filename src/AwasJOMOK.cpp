#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <unistd.h>
using namespace std;
string nama1, nama2;
int Hasil;
bool systemC = true;
float check;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
float east = 0;

void random(){
	srand((unsigned)time(0));
	Hasil = ((rand() % 100));
}

void penghasilan(){
	if (Hasil > 90){
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		cout <<"Awas [" <<nama1 <<nama2 <<"]"<<endl <<endl  <<"Kamu mendapat..." <<Hasil <<"%" <<endl <<"Kamu sangat jomok!";
	} else if (Hasil > 70){
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		cout <<"Waspada [" <<nama1 <<nama2 <<"]" <<endl <<endl <<"Kamu mendapat..." <<Hasil <<"%" <<endl <<"Kamu harus segera melakukan sesuatu!";
	} else if (Hasil > 40){
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		cout <<"Untunglah [" <<nama1 <<nama2 <<"]"<<endl <<endl <<"Kamu mendapat..." <<Hasil <<"%" <<endl <<"Kamu masih aman, tapi tetap waspadalah";
	} else if (Hasil > 20){
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
		cout <<"Selamat [" <<nama1 <<nama2 <<"]"<<endl <<endl <<"Kamu mendapat..." <<Hasil <<"%" <<endl <<"Kamu masih dalam kadar aman!";
	} else {
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
		cout <<"Syukuran [" <<nama1 <<nama2 <<"]" <<endl <<endl <<"Kamu mendapat..." <<Hasil <<"%" <<endl <<"Kamu benar-benar normal!";
	}
}

void pernyataan(){
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
	cout <<"\n=-------= (KONFIRMASI) Ulangi (1) / Selesai (2) =-------=\n";
	cin >> check;
	if (check == 1){
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
		cout <<"=-------= Pendeteksi Jomok =-------=\n";
		cout <<"Masukan Nama Mu\n";
		cin >> nama1;
		getline (cin, nama2);
		random();
		cout <<"=-------= Hasilnya =-------=\n";
		penghasilan();
		pernyataan ();
	} else if (check == 2){
		systemC = false;
	} else {
		east += check;
//		cout <<east;
		if (east > 30){
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		Sleep(1000);
		cout <<endl <<"YOU";
		Sleep(1000);
		cout <<" SHOULD";
		Sleep(1000);
		cout <<" KILL";
		Sleep(1000);
		cout <<" YOURSELF";
		Sleep(1000);
		string text = " NOW!";
			for (int i =0; i<text.length(); i++){
				cout << text[i] << flush;
				clock_t start_time = clock();
				while (clock() < start_time + CLOCKS_PER_SEC / 50){}
			}
			Sleep(1000);
		systemC = false;
		} else if (east > 20){
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		cout <<"=-------= ADMIN MARAH, 10 NILAI LAGI. SAYA KICK KAMU =-------=\n";
		pernyataan();
		} else if (east > 10){
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		cout <<"=-------= JANGAN DISPAM JUGA LAH KONT =-------=\n";
		pernyataan();
		} else {
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		cout <<"=-------= /KESALAHAN/ Opsi tidak tersedia, Ulangi =-------=\n";
		pernyataan();
		}
	}
}

int main (){
	
	while (systemC = true) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
	cout <<"=-------= Pendeteksi Jomok =-------=\n";
	cout <<"Masukan Nama Mu\n";
	cin >> nama1;
	getline (cin, nama2);
	random();
	cout <<"=-------= Hasilnya =-------=\n";
	penghasilan();
	pernyataan ();
	return 0;
	}
}
