#include <iostream>
#include <iomanip> 

int main()
{
    double p, r; 
    int t;       

    std::cout << "введіть суму, річну відсоткову ставку та термін у роках через ПРОБІЛ: ";
    if (!(std::cin >> p >> r >> t) || p <= 0 || r <= 0 || t <= 0) {
        std::cerr << "еррор! значення повинні бути додатними." << std::endl;
        return 1; 
    }

    double res = (p * t * r) / 100;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "прості відсотки: " << res << std::endl;

    return 0;
}
