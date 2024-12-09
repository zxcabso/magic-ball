#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <ctime> 

int main()
{
    setlocale(LC_ALL,"Ru");
    std::string question;
    std::vector<std::string> answers =
    {
        "Конечно",
        "Это предрешено",
        "Я думаю что нет",
        "Скорее нет",
        "Безусловно",
        "У меня нету слов"
        // you can add more words if you need
    };
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "Добро пожаловать в игру Magic 8 Ball!\n";
    std::cout << "Задай свой вопрос (или введи 'выход' для завершения):\n";

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, question);

        if (question == "выход") {
            std::cout << "Спасибо за игру! Удачи!\n";
            break;
        }

        if (question.empty()) {
            std::cout << "Пожалуйста, задай вопрос!\n";
            continue;
        }
        int randomIndex = std::rand() % answers.size();
        std::cout << "Магический шар отвечает: " << answers[randomIndex] << "\n";
    }
}