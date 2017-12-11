struct Tile {
    bool explored; // have we seen this 
    Tile() : explored(false) {}
};
 
class Map {
public :
    int width,height;
    bool canWalk(int x, int y) const;

    Map(int width, int height);
    ~Map();
    bool isWall(int x, int y) const;
    void addMonster(int x, int y);
    void render() const;
    bool isInFov(int x, int y) const;
    bool isExplored(int x, int y) const;
    void computeFov();
protected :
    TCODMap *map;
    Tile *tiles;
    friend class BspListener;
    void dig (int x1, int y1, int x2, int y2);
    void createRoom (bool first, int x1, int y1, int x2, int y2);
    void setWall(int x, int y);

};


