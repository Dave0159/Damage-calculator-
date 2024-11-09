#include <iostream>
using namespace std;

int main (){
	int str, def, total_str, total_def, damage;
	
	cout << "Masukan Jumlah Str Player:";
	cin >> str;
	
	cout << "Masukan Jumlah Def Monster:";
	cin >> def;
	
	total_str = str * 10;
	total_def = def * 10;
	cout << "Total Str: " << total_str << endl;
	cout << "Total Def: " << total_def << endl;
	
	damage = total_str - total_def;
	cout << "Hasil Damage: " << damage << endl;
	
	return 0;
}
