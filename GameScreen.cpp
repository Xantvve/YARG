GameScreen::redraw(VisualObject sign, int x, int y){
	x--; y--;
	for(int v = 0, v <= sign.width, v++)      {
		for(int w = 0, w <= sign.height, w++) {
			picture[x++][y++] = sign.form[v][w]; }; };
