#include "logic.h"

string find_the_sequence(int a, int b) {
	string result = "";

	if (a == b) {
		return "";
	}
	if (a > b) {
		swap(a, b);
	}

	int correct_value = b;

	if (correct_value % 2 == 0) {
		correct_value--;
	}

	while (correct_value >= a) {
		result += to_string(correct_value) + " ";
		correct_value -= 2;

	}

	return result;
}