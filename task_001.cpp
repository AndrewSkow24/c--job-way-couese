/*
ЗАДАНИЕ #1: Переменные и вывод


Напишите программу, которая:
1. Объявляет переменные следующих типов:
   - int — возраст;
   - double — средний балл;
   - char — первая буква имени;
   - bool — учитесь ли вы сейчас (true/false).
2. Присваивает им реальные значения.
3. Выводит на экран текст в формате:

   Меня зовут [буква].
   Мне [возраст] лет.
   Мой средний балл: [балл].
   Я учусь: [Да/Нет].


Требования:
- Используйте std::cout для вывода.
- Для bool выводите "Да" или "Нет" (не true/false).
- Добавьте краткие комментарии к каждой переменной (что она хранит).


Пример вывода:
   Меня зовут А.
   Мне 20 лет.
   Мой средний балл: 4.75.
   Я учусь: Да.
*/


// Ваше решение ниже:
#include <iostream>
#include <string>
using namespace std; 


int main(){
    int age;
    double avg_grade;
    char first_letter_of_name;
    bool is_student;

    age = 12; 
    avg_grade = 3.34;
    first_letter_of_name = 'A';
    is_student = true;

    string readable_answer; 

    if (is_student){
        readable_answer = "Да"; 
    } else {
        readable_answer = "Нет";
    }

    cout << "Меня зовут " << first_letter_of_name<<endl;
    cout << "Мне " << age << " лет" <<endl;
    cout << "Мой средний балл: " << avg_grade << endl;
    cout << "Я учусь: " << readable_answer << endl;

    return 0;
}