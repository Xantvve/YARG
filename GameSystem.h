class GameSystem
{
	public:
       GameSystem(string levelFileName);
       
       void playGame();
       
	private:
        Player *player;
        Level  *level;
};
