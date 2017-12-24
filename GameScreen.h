
class GameScreen {
	public:
		GameScreen(int, int);

		void redraw(GameEvent event);
		void append(&picture);
		void clear();

	private:
		int height;
		int width;

		char picture[width][height]; }

class VisualObject {
	public:
		string label;
		int width;
		int height;
		char form[width][height];
		int x;   // Coordinates of the upper right corner!
		int y; } //
