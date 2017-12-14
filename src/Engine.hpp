class Engine {
public :
    int screenWidth;
    int screenHeight;
    TCOD_key_t lastKey;

    enum GameStatus{
        STARTUP,
        IDLE,
        NEW_TURN,
        VICTORY,
        DEFEAT
    } gameStatus;
    TCODList<Actor *> actors;
    Actor *player;
    Map *map;
    int fovRadius;
 
    Engine( int screenWidth, int screenHeight);
    ~Engine();
    void update();
    void render();
    void sendToBack(Actor *actor);
};
 


extern Engine engine;
