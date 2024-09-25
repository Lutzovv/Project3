#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int number;
    int total_sum = 0;
    int even_sum = 0;
    int odd_sum = 0;

    std::cout << "Enter numbers (0 to exit): \n";

    while (true) {
        std::cin >> number;
        if (number == 0) {
            break;
        }
        total_sum += number;

        if (number % 2 == 0) {
            even_sum += number;
        }
        else {
            odd_sum += number;
        }
    }

    std::cout << "Sum of all entered numbers: " << total_sum << "\n";
    std::cout << "Sum of even numbers: " << even_sum << "\n";
    std::cout << "Sum of odd numbers: " << odd_sum << "\n";

	return 0;
}