#include "test.h"

void test(int likes, int days, string expected, string test_name) {
	string actual = calculate_likes(likes, days);

	string msg = test_name + " ---> ";
	msg += (actual == expected ? "PASS" : "FAIL");
	cout << msg << endl;

}


void run_all_test() {
	test(5, 4, "Day 1: 5 likes\nDay 2: 10 likes\nDay 3: 15 likes\nDay 4: 20 likes\n", "test01");
	test(100, 1, "Day 1: 100 likes\n", "test02");
	test(0, 2, "Day 1: 0 likes\nDay 2: 0 likes\n", "test03");
	test(-20, 4, "Error! Some data was entered incorrectly.", "test04");
	test(-10, 0, "Error! Some data was entered incorrectly.", "test05");
	test(-20, -5, "Error! Some data was entered incorrectly.", "test06");

}