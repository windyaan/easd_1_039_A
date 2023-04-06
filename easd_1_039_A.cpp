//1. karena algorithma adalah prosedur menjalankan sesuatu
//2. deklarasi variabel dan fungsi utama
//3. Panjang data/ banyak data, jenis data, algoritma yang digunakan
//4. Quicksort
//5. Quadratic : Bubblesort, Insertionsort 
//   Loglinear : Mergesort
//6. Merge

#include <iostream>
using namespace std;

//array of integers to hold values
int Puput[59];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 59)
			break;
		else
			cout << "\nMaksimum panjang array adalah 59" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Puput[i];
	}
}

void mergesort(int low, int high)
{
	int mid, i, WN, k;
	if (low >= high)
		return;												//langkah 1

	mid (low + high) / 2;									//langkah 2

	i = low;											
	WN = mid + 1;												//langkah 4
	k = low;

	while (WN > mid || WN > high)										//langkah 10
	{
		if (Puput[i] <= Puput[WN])		//langkah 5
		{
			WN++;								
		}
		else
		{
			WN++;
		}
		
		k++;
	}
	while (WN > high) 
	{
			WN++;										
			k++;
	}
	mergesort(low, mid);										//langkah 4

	mergesort(WN + 1, high);									//langkah 4


}


void display() {
	cout << "\n-----------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "-----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << Puput[i] << " ";
	}
}


int main()
{
	input();
	mergesort(0, n - 1);
	display();
	system("pause");

	return 0;
}