#include "logic.h"

bool is_power_of_two(int number) {
	if (number <= 0) {
		return false;
	}

	while (number >= 0) {
		
		if (number % 2 == 0) {
			number = number / 2;
		}


		return number == 1;
	}
}