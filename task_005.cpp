// task 005
#include <iostream>
using namespace std; 

int main(){
    int first_number, second_number; 

    cout << "Введите первое (меньшее число): ";
    cin >> first_number;

    cout << "Введите второе (большее число): ";
    cin >> second_number;
    
    if (first_number <= second_number){
        for (int i = first_number; i <= second_number; i++){
            cout << i << endl;
        }
    } else {
        cout << "Некорректный ввод!";
        return 1; 
    }

    return 0;
}
