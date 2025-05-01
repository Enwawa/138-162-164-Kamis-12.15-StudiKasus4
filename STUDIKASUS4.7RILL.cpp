#include <iostream>
using namespace std;

class Tabungan{
	private:
		int uang_saku;
		int pengeluaran[12];
		int total_pengeluaran;
		int tabungan;
		
	public:
		void inputData(){
			cout << "Masukkan uang saku tetap setiap bulan: "; cin >> uang_saku;
			
			for(int i=0;i<12;i++){
				cout << "Masukkan pengeluaran bulan ke-" << i+1 << ": ";
				cin >> pengeluaran[i];
			}
			cout << endl;
			system("cls");
		}
		void tampilkanPengeluaran(){
			for(int i=0;i<12;i++){
				cout << "Pengeluaran di bulan ke-" << i+1 << ": " << pengeluaran[i] << endl;
				total_pengeluaran = total_pengeluaran + pengeluaran[i];
			}
			cout << endl;
			cout << "Total pengeluaran : " << total_pengeluaran << endl;
		}
		void tampilkanTabungan(){
				tabungan = uang_saku - total_pengeluaran;
				cout << "Uang tabungan saat ini: " << tabungan << endl;
		}
	};

int main(){
	
	Tabungan andi;
	andi.inputData();
	andi.tampilkanPengeluaran();
	andi.tampilkanTabungan();	
}
