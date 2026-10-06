#include "logic.h"

string get_order(int a, int b) {
	string result = "";

	int sum = 1;

	if (a == b) {
		return to_string(a) + " ";
	}
	if (a > b) {
		sum = -1;
	}
	
	while (true) {
		result += to_string(a) + " ";

		if (a == b) {
			break;
		}
		a += sum;

	}
	
	return result;
}