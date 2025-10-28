/*
// ЗАДАНИЕ 1: Вывести число наоборот
#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL,"ru");
    int chislo;
    cout << "Введите целое число больше нуля: ";
    cin >> chislo;

    if (chislo <= 0) {
        cout << "Ошибка: число должно быть больше нуля.\n";
        return 0;
    }

    cout << "Число наоборот: ";
    // Используем for: будем делить число на 10, пока не станет 0
    // Но так как for требует счётчика, а число неизвестно по длине,
    // сделаем хитрость: будем обрабатывать цифры в цикле for с break
    for (; chislo > 0; ) {
        int poslednyaya_tsifra = chislo % 10;  // получаем последнюю цифру
        cout << poslednyaya_tsifra;
        chislo = chislo / 10;  // убираем последнюю цифру
    }
    cout << "\n";
    return 0;
}
*/

/*
// ЗАДАНИЕ 2: Сумма цифр числа
#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL,"ru");
    int chislo;
    cout << "Введите целое число: ";
    cin >> chislo;

    // Обрабатываем отрицательные числа
    if (chislo < 0) {
        chislo = -chislo;
    }

    int summa = 0;
    // Цикл for: будем извлекать цифры
    for (; chislo > 0; ) {
        int tsifra = chislo % 10;
        summa = summa + tsifra;
        chislo = chislo / 10;
    }

    cout << "Сумма цифр числа: " << summa << "\n";
    return 0;
}
*/

/*
// ЗАДАНИЕ 3: Улитка
#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL,"ru");
    int dni;
    cout << "Введите количество дней: ";
    cin >> dni;

    if (dni <= 0) {
        cout << "Ошибка: количество дней должно быть больше 0.\n";
        return 0;
    }

    int rasstoyanie = 0;
    int put_v_den = 15;  // в первый день 15 см

    // Проходим по каждому дню
    for (int den = 1; den <= dni; den++) {
        rasstoyanie = rasstoyanie + put_v_den;
        put_v_den = put_v_den + 2;  // каждый следующий день на 2 см больше
    }

    cout << "Общее расстояние за " << dni << " дней: " << rasstoyanie << " см\n";
    return 0;
}
*/

/*
// ЗАДАНИЕ 4: Монетка студента Д.
#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL,"ru");
    int orly = 0;  // сколько раз выпал "орёл" (1)

    cout << "Подбрасываем монетку 9 раз. Вводите 1 (орёл) или 0 (решка):\n";

    for (int brosok = 1; brosok <= 9; brosok++) {
        int vybor;
        cout << "Бросок " << brosok << ": ";
        cin >> vybor;

        if (vybor == 1) {
            orly = orly + 1;
        }
        // если 0 — ничего не делаем
    }

    if (orly % 2 == 0) {
        cout << "Решение: ПОЛОЖИТЕЛЬНОЕ (орлов чётное количество: " << orly << ")\n";
    } else {
        cout << "Решение: ОТРИЦАТЕЛЬНОЕ (орлов нечётное количество: " << orly << ")\n";
    }

    return 0;
}
*/

// ЗАДАНИЕ 5: Календарь на месяц
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int dni_v_mesyatse;
    int pervyj_den_nedeli;  

    cout << "Введите количество дней в месяце (28-31): ";
    cin >> dni_v_mesyatse;

    cout << "Введите номер первого дня недели (1=пн, 2=вт, ..., 7=вс): ";
    cin >> pervyj_den_nedeli;

    // Простая проверка
    if (dni_v_mesyatse < 28 || dni_v_mesyatse > 31 || pervyj_den_nedeli < 1 || pervyj_den_nedeli > 7) {
        cout << "Ошибка в данных.\n";
        return 0;
    }

    // Выводим заголовок недели
    cout << "Пн Вт Ср Чт Пт Сб Вс\n";

    // Сначала выводим пустые клетки до первого дня
    int pozitsiya = 1;  // текущая позиция в неделе
    for (int i = 1; i < pervyj_den_nedeli; i++) {
        cout << "   ";  // три пробела под пустой день
        pozitsiya = pozitsiya + 1;
    }

    //  выводим дни месяца
    for (int den = 1; den <= dni_v_mesyatse; den++) {
        // Выводим день
        if (den < 10) {
            cout << " " << den << " ";
        }
        else {
            cout << den << " ";
        }

        pozitsiya = pozitsiya + 1;

        // перенос строки
        if (pozitsiya > 7) {
            cout << "\n";
            pozitsiya = 1;
        }
    }

    //  добавим перенос
    if (pozitsiya != 1) {
        cout << "\n";
    }

    return 0;
}