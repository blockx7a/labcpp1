#include <iostream>

int main()
{
    int a, b;

    std::cout << "введіть два числа: ";
    if (!(std::cin >> a >> b)) {
        std::cerr << "помилка вводу. будь ласка введіть два числа." << std::endl;
        return 1; 
    }

    std::cout << "сума: " << a + b << std::endl;
    std::cout << "добуток: " << a * b << std::endl;
    std::cout << "різниця: " << a - b << std::endl;

    return 0; 
}
