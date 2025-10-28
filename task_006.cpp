// task 006 
#include <iostream>
#include <string>
using namespace std; 

int main(){

    int positive_number; 

    cout << "Введите целое положительное число: ";
    cin >> positive_number;

    string string_num = to_string(positive_number);
    int sum_of_digits = 0;


    if (positive_number > 0) {
        for (int i = 0; i <= string_num.size() -1; i++){
            int current_digit = string_num[i] - '0';
            sum_of_digits += current_digit;
        }
    cout << "Сумма цифр в числе: " << sum_of_digits << endl;

    } else {
        cout<<"Ошибка: введите положительное число!"<<endl;
        return 1;
    }

    return 0; 
}