#include <iostream>
using namespace std;


int main()
{
setlocale(LC_ALL, "");
    srand(time(0));
    int i,a ;
    int list[10];
    
    printf("Изначальный массив id\n");
    for (i = 0; i < 10; i++) 
    {
        list[i] = (rand() % 90000) + 10000;
        printf("%6i", list[i]);
    }

    printf("\nвведите степень шифрования (0-15) id\n");
    cin >> a;
    
    while (a <0 || a > 15){
        printf("переполнение, введите другую степень (например 0-15)\n");
        cin >> a;
    }
    printf("зашифрованный массив\n");
    for (i = 0; i<10; i++)
    {
        list[i] = (unsigned)list[i] << a;         
        printf("%6i ", list[i]); 
    }
    printf("\nрасшифрованный массив\n");
    for (i = 0; i<10; i++)
    {
        list[i] = (unsigned)list[i] >> a;              
        printf("%6i ", list[i]);           
    }



}
