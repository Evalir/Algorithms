#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void imprimirDeMayorAMenor(vector<int> nums) {
	sort(nums.begin(),nums.end());
	for(int i = 0; i < nums.size(); i++) {
		cout << nums[i] << ' ';
	}
	cout << endl;
	return;
}

void ImprimirNumerosPrimos(vector<int> nums) {
	sort(nums.begin(),nums.end());
	for(int i = nums[0]; i <= nums[nums.size()-2]; i++) {
		for(int j = 2; j*j <= i; j++) {
			if (nums[i] % j == 0) {
				cout << nums[i] << ' ';
				break;
			}
			else
				continue;
		}
	}
	cout << endl;
	return;
}

void imprimirNumerosDivisibles(vector<int>& nums) {
	for(int i = 0; i < nums.size(); i++) {
		if (nums[i] % 3 == 0 || nums[i] % 5 == 0)
			cout < nums[i] << ' ';
	}
	cout << endl;
	return;
}
int main() {
	cout << "Digite 5 numeros enteros:" << endl;
	vector<int> nums(5);
	for(int i = 0; i < 5; i++)
		cin >> nums[i];

	while(true) {
		cout << "Que desea hacer?" << endl;
		cout << "1 - Imprimir arreglo de menor a mayor" << endl;
		cout << "2 - Buscar numeros primos entre menor y segundo mayor" << endl;
		cout << "3 - Numeros divisibles entre 3 y 5" << endl;
		int des;
		cin >> des;
		if (des == 1)
			imprimirDeMayorAMenor(nums);
		else if (des == 2) {
			//buscar menor y segundo mayor
			imprimirNumerosPrimos(a,b);
		}
		else if (des == 3)
			imprimirNumerosDivisibles(nums);
		else
			cout << "La opcion digitada es incorrecta." << endl;
	}

	return 0;

}