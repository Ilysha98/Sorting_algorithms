#include <iostream>
#include <vector>
#include <array>

using namespace std;

void merge(int* a, int n){
    int mid = n / 2; // Находим середину сортируемой последовательности
    if(n % 2 == 1)
        mid ++;
    int h = 1; // ШАГ
    // Выделение памяти под формируемую последовательность
    
    int* c = (int*)malloc(n * sizeof(int));
    int step;
    while(h < n) {
        step = h;
        int i = 0; // индекс первого пути
        int j = mid; // индекс второго пути
        int k = 0; // индекс элемента в результирующей последовательности
        while (step <= mid){
            while((i < step)&&(j < n)&& (j < (mid + step)))
            {
                if(a[i] < a[j])
                {
                    c[k] = a [j];
                    i++; k++;
                }
                else
                {
                    c[k] = a[j];
                    j++; k++;
                }
        }
            while(i < step)
            {
                c[k] = a[i];
                i++; k++;
            }
            while (j < (mid + step) && (j < n))
            {
                c[k] = a[j];
                j++; k++;
    }
            step = step + h;
}
        h = h * 2;
        
        for(i = 0; i < n; i++)
        {
            a[i] = c[i];
        }
    }

int main() {
    
    int a [8];
    
    for (int i = 0; i < 8; i++)
    
        a[i] = rand() % 20 - 10;
    
    for (int i = 0; i < 8; i++)
        printf("%d", a[i]);
    printf("\n");
    merge(a, 8);
    for (int i = 0; i < 8; i++)
        printf("%d", a[i]);
    printf("\n");
    getchar();
    
    
    return 0;
}
