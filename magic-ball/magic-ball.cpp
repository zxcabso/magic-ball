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
        "�������",
        "��� ����������",
        "� ����� ��� ���",
        "������ ���",
        "����������",
        "� ���� ���� ����"
        // you can add more words if you need
    };
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "����� ���������� � ���� Magic 8 Ball!\n";
    std::cout << "����� ���� ������ (��� ����� '�����' ��� ����������):\n";

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, question);

        if (question == "�����") {
            std::cout << "������� �� ����! �����!\n";
            break;
        }

        if (question.empty()) {
            std::cout << "����������, ����� ������!\n";
            continue;
        }
        int randomIndex = std::rand() % answers.size();
        std::cout << "���������� ��� ��������: " << answers[randomIndex] << "\n";
    }
}