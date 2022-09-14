#include <iostream>
using namespace std;

int Search( int* k, int n, int key) // функция поиска в массива k размером n и элемента со значением key
{
    for (int i = 0; i < n; i++) // Просматриваем все элементы в цикле
    {
        if (k[i] == key) // Если находим элемент со значением key
            return i; // Возвращаем его индекс
    }
    
    return 1;
};

int main() {
    int k [8]; // Описываем массив из 8 элементов
    int point; // Индекс элемента, равного указонному значению 3
    
    for ( int i = 0; i < 8; i++)
    {
        cout << "Enter k: " << " " << i << endl;
        cin >> k[i];
        
    }
    point = Search(k, 8, 3);
    
    if (point == -1 )
    {
        cout << "There are no elements equal to 3 in the array!\n";
    }
    
    else
    {
        cout << "The element at index is 3" << ":" << point <<endl;
    }
    
    getchar();
    
   
    return 0;
}
