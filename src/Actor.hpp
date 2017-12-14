class Actor {
public :
    int x,y; // position on map
    int ch; // ascii code
    TCODColor col; // color
    const char *name;  //name
    bool blocks; //can pass throuhgh?
    Attacker *attacker; //can damage
    Destructible *destructible; //can be destroyed
    Ai *ai; //can self update
 
    Actor(int x, int y, int ch,  const char *name, const TCODColor &col);
    void update();
    void render() const;
};
