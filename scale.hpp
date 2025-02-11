void scale(int level){
    print("------------", 1);
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
    print("|", 1);
    print("------------", 1);
}