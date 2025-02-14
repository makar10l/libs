#include <unistd.h>
#ifdef
#include <windows.h>
#endif
void clear(){
    system("clear");
    #ifdef
    system("cls");
    #endif
}