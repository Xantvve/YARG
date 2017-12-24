#include "level.h"
#include <fstream>



Level::Level(){
               
}

void Level::load(string fileName) {
	 ifstream file;
          
	 file.open(fileName);
		 if (file.fail()){
			 perror(fileName.c_str());
			 system("STOPPED BY ERROR WITH LOADING SOME FILES");
             exit(1);
          }
          
          string line;
          
          while(getline(file, line)){
                              levelData.push_back(line);
          }
          
          file.close();
}

void Level::print(){
          for(int i = 0; i < levelData.size(); i++){
                  printf("%s\n", levelData[i].c_str())        
          }
          printf("\n");
}




















