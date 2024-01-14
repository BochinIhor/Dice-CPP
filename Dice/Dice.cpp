#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    setlocale(LC_ALL, "rus");
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Игра в кости!\n";

    int player1Roll = rollDice();
    std::cout << "Игрок 1 бросает кости и получает: " << player1Roll << std::endl;

    int player2Roll = rollDice();
    std::cout << "Игрок 2 бросает кости и получает: " << player2Roll << std::endl;

    if (player1Roll > player2Roll) {
        std::cout << "Игрок 1 побеждает!\n";
    }
    else if (player1Roll < player2Roll) {
        std::cout << "Игрок 2 побеждает!\n";
    }
    else {
        std::cout << "Ничья!\n";
    }

    return 0;
}
