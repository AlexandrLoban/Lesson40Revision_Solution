#include "logic.h"

string calculate_likes(int likes, int day) {
	if (likes < 0 or day <= 0) {
		return "Error! Some data was entered incorrectly.";
	}

	string result = "Day 1: " + to_string(likes) + " likes";

	for (int i = 2; i <= day; i++) {
		result += "\nDay " + to_string(i) + ": "
			+ to_string(i * likes) + " likes";

	}

	
	return result += "\n";
}