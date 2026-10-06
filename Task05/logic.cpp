bool is_digits_count_even(long long number) {
	if (number < 0) {
		number = -number;
	}
	
	int digits_count = 1;

	while (number > 9) {
		number /= 10;
		digits_count++;
		if (number == 0) {
			digits_count++;
		}
	}
	
	if (digits_count % 2 == 0){
		return true;
	}

	return false;
}