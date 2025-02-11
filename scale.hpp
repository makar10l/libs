void scale(int level){
    int xyi = 10;
    level = level / 10;
    xyi -= level;
    print("|");
    while(level){
        print("#");
        level--;
    }
    while(xyi){
        print(".");
        xyi--;
    }
    print("|");
}