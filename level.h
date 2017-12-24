#pragma once

class Level{
      public:
             Level();
             
             void load(string fileName);
             void print();
      
      private:
              vector <string> levelData;
};
