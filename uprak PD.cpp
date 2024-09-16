#include<iostream>
using namespace std;

int main () {
	cout<<" menginputkan bilangan bulat untuk konversi ke celcius farenhait reamor cari nilai tertinggi dan terendah "; 
	cout<<endl; 
	int suhu;
	cout<<" Nilai Satuan: ";
	cin>>suhu; 
	float cel, faren, reamaur;
	cel= suhu*1;
	cout<<" Nilai Celcius "<<cel;
	cout<<endl; 
	faren= cel*(9/5)+32;
	cout<<" Nilai Farenheit: "<<faren; 
	cout<<endl;
	reamaur= cel*4/5;
	cout<<" Nilai Reamaur: "<<reamaur;
	cout<<endl;
	
	float nilai_suhu [3] = { cel, faren, reamaur};
	int min = nilai_suhu[0], max = nilai_suhu[0];
	for (int u = 0; u < 3; u++){
		if (nilai_suhu[u] < max) {
			min = nilai_suhu[u];
		} 
		if (nilai_suhu[u] > min){
			max = nilai_suhu[u];
		}
	} 
	cout << "\nsuhu Terendah : " << min;
	cout << "\nsuhu tertinggi : " << max;
}
