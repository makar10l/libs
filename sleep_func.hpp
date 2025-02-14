#ifdef WIN32
    void sleep(int secs){
        Sleep(secs);
    }
#else
    void sleep(int speed_microsecs){
        usleep(speed_microsecs);
    }
#endif