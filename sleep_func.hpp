#ifdef WIN32
    void sleep(int secs){
        Sleep(secs);
    }
#else
    void sleep(int secs){
        int microsecs = secs * 1000000;
        usleep(microsecs);
    }
#endif