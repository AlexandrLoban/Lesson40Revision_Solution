#include "logic.h"

string draw_pyramid(int height, char symbol) {
	string result = "";
	if (height < 2) {
		return "";
	}

	for (int i = 0; i < height; i++) {
		
		for (int j = 0; j < height - 1 - i; j++) {
			result += " ";
		}

		for (int q = 0; q < 2 * i + 1; q++) {
			result += symbol;
		}

		if (i < height - 1) {
			result += "\n";
		}

	}

	return result;
}