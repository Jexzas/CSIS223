#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main() {
    random_device rdevice{};
    default_random_engine num{ rdevice() };
    uniform_real_distribution<double> randomNum{10, 100};
    for (int i = 0; i < 26; i++) {
        double numb = randomNum(num);
        cout << fixed << showpoint << setprecision(2) << numb << " ";
    }
}