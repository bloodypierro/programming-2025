
#include <iostream>
using namespace std;

int main()
{
    // Пункт 1
    int amount;
    cout << "Количество чисел: ";
    cin >> amount;

    int sum = 0, totalCount = 0, maxNeg = -9999999, maxNegCount = 0;  // Добавлено totalCount
    bool found = false;

    cout << "Введите " << amount << " чисел: ";

    for (int i = 0; i < amount; i++) {
        int num;
        cin >> num;

        if (num < 0) {
            found = true;
            sum += num;
            totalCount++;  // общее количество отрицательных чисел
            
            if (num > maxNeg) {
                maxNeg = num;
                maxNegCount = 1;
            }
            else if (num == maxNeg) {
                maxNegCount++;
            }
        }
    }

    if (!found) {
        cout << "Нет отрицательных чисел" << endl;
    }
    else {
        cout << "Сумма отрицательных: " << sum << endl;
        cout << "Общее количество отрицательных: " << totalCount << endl;
        cout << "Наибольшее отрицательное: " << maxNeg << endl;
        cout << "Количество повторений наибольшего отрицательного: " << maxNegCount << endl;
    }

    // Пункт 2
    int x;
    cout << "Введите число для поиска наибольшей цифры: ";
    cin >> x;

    if (x >= -999 && x <= 999) {
        if (x < 0) x = -x;

        int temp = x;
        int maxDigit = 0;
        
        // Обработка случая, когда число 0
        if (temp == 0) {
            maxDigit = 0;
        } else {
            while (temp > 0) {
                int digit = temp % 10;
                if (digit > maxDigit) {
                    maxDigit = digit;
                }
                temp = temp / 10;
            }
        }

        cout << "Наибольшая цифра: " << maxDigit << endl;
    } else {
        cout << "Число должно быть в диапазоне от -999 до 999" << endl;
    }

    return 0;
}

