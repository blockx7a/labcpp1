#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "введіть висоту, ширину і довжину через ПРОБІЛ: ";
    if (!(std::cin >> a >> b >> c) || a <= 0 || b <= 0 || c <= 0) {
        std::cerr << "еррор! введіть три цілі числа." << std::endl;
        return 1; // Код помилки
    }

    int volume = a * b * c;
    int surface_area = 2 * (a * b + b * c + a * c);

    std::cout << "об'єм: " << volume << std::endl;
    std::cout << "повна поверхня: " << surface_area << std::endl;

    return 0;
}
