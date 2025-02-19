#ifdef WIN32
    void sleep(float secs){
        secs = static_cast<int> secs;
        Sleep(secs);
    }
#else
    void sleep(float secs){
        int microsecs = secs * 1000000;
        usleep(microsecs);
    }
#endif 
