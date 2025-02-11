
void scale(int level){
    print("------------\n");
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
    print("|\n");
    print("------------\n");
}