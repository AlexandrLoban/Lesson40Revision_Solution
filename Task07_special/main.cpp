#include "logic.h"

int main() {
	int height;
	char symbol;

	do {
		cout << "Input height of the pyramide: ";
		cin >> height;
		cout << "Input symbol: ";
		cin >> symbol;
	} while (height < 2);

	cout << draw_pyramid(height, symbol);

	return 0;
}