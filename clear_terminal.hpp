#include <cstdlib>
void clear(){
       #ifdef WIN32
            system("cls");
        #else
            system("clear");
        #endif   
}
