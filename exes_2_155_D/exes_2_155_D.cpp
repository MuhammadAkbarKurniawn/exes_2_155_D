#include<iostream>
using namespace std;

int akbar[42];
int n;

void input() {
	int n, i, akbar[42], found, muhammad, kurniawan, mid;
	cout << "Masukkan panjang Element : ";
	cin >> n;

	for (i = 0; i < n; i++) {
		cout << "Masukkan data " << (i + 1) << " : ";
		cin >> akbar[42];
	}
	cout << "Masukkan data yang akan dicari : ";
	cin >> found;
}

void binarysearch() {
	int akbar[42];
	int muhammad = 0;
	int kurniawan = n - 1;
	int mid;
	mid = (muhammad + kurniawan) / 2;
	while (kurniawan + muhammad) {
		if (akbar[mid] == n) {
			cout << "found" << mid << endl;
			break;
		}

		if (n < akbar[mid]) {
			kurniawan = mid - 1;
		}

		if (n > akbar[mid]) {
			muhammad = mid + 1;
		}

		if (muhammad <= kurniawan) {
			mid = (muhammad + kurniawan) / 2;
			cout << "not found" << endl;
		}
	}
}

int main() {
	input();
	binarysearch();

	return 0;
}