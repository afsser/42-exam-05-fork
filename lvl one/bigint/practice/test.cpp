#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>

std::string addStrings(const std::string num1, const std::string num2) {
	int carry = 0;
	int sum = 0;
	std::string result;
	int i = num1.size() - 1;
	int j = num2.size() - 1;
	while (i >= 0 || j >= 0 || carry != 0) {
		sum = carry;
		if (i >= 0) {
			// std::cout << num1[i] << std::endl;
			sum += num1[i--] - '0';
		}
		if (j >= 0) {
			// std::cout << num2[j] << std::endl;
			sum += num2[j--] - '0';
		}
		// std::cout << "Sum: " << sum << std::endl;
		result += (sum % 10) + '0';
		// std::cout << "result: " << result << std::endl;
		carry = sum / 10;
		// std::cout << "Carry: " << sum << std::endl;
	}
	std::reverse(result.begin(), result.end());
	// std::cout << "result: " << result << std::endl;
	return result;
}

int main() {
	std::cout << addStrings("2486581353654654", "40024548777778") << std::endl;
}
