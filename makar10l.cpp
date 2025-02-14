#ifdef WIN32
    #include <windows.h>
    #include <conio.h>
#else
    #include <unistd.h>
    #include "getchar.hpp"
#endif

#include "print.hpp"
#include "scale.hpp"
#include "input.hpp"

#include "clear_terminal.hpp"
#include "sleep_func.hpp"

#define ZERO 0

