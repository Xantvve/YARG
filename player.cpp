
      
      Player::Player() {
                       x = 0;
                       y = 0;
      }
      
      void Player::init(string nick,
						int    _level,
						int    _health,
						int    _attack,
						int    _defense,
						int    _experience){
           level = _level;
           health = _health;
           attack = _attack;
           defense = _defense;
           experience = _experiense;
      }

      void Player::getPosition(int &_x, int &_y){
           x = _x;
           y = _y;    
      }

	  void Player::move(basicDirection dir){
		   switch dir {
			   case Up    :
				   y++;
			   case Down  :
				   y--;
			   case Right :
				   x++;
			   case Left  :
				   x--;   };
		   redraw(Hero, y, x);
	  }
