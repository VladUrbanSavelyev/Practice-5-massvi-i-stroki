#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");
    char str[100];          
    char res[100] = "";   
    int M, N;            

    cout << "Введите строку: ";
    cin.getline(str, 200);  
    cout << "Введите M и N: ";
    cin >> M >> N;
    char *ptr = str;         
    char *start;            
    int w_count = 0;       
    while (*ptr != '\0') {
        while (*ptr == ' ') {
        ptr++;            
        }
        if (*ptr == '\0') break;
        start = ptr;        
        w_count++;          
        while (*ptr != ' ' && *ptr != '\0') {
            ptr++;          
        }
        if (w_count < M || w_count > N) {   
            char *temp = start;           
            while (temp < ptr) {           
                strncat(res, temp, 1);  
                temp++;                   
            }
            strcat(res, " ");
        }
    }
    
   
    int len = strlen(res);  
    if (len > 0) {              
        res[len-1] = '\0';    
    }

    cout << "Результат: " << res << endl;
    return 0;
}