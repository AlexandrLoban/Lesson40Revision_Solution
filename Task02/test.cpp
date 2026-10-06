#include "test.h"

void test(int number1, int number2, string expected, string test_name) {
	string actual = find_the_sequence(number1, number2);

	string msg = test_name + " ---> ";
	msg += (actual == expected ? "PASS \n" : "FAIL \n");
	cout << msg;
}

void run_all_tests() {
	test(1, 5, "5 3 1 ", "test01");
	test(6, 2, "5 3 ", "test02");
	test(62, 77, "77 75 73 71 69 67 65 63 ", "test03");
	test(8, -4, "7 5 3 1 -1 -3 ", "test04");
	test(13, 13, "", "test05");
	test(4, 6, "5 ", "test06");
	test(2, 2, "", "test07");


}