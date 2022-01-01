//
// Created by stefstef on 31/3/2017.
//

#include <cstdlib>
#include "StupidPlayer.h"
#include <fstream>
int StupidPlayer::getMove(const char **ViewAround) {
    std::ofstream he("inner.txt");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            he<<ViewAround[i][j];
        }
        he<<'\n';
    }
    return STAND;

}

void StupidPlayer::init(int width, int height, int x, int y) {

}

std::string StupidPlayer::getName() {
	return std::string("StupidPlayer");
}

std::string StupidPlayer::getId() {
	return std::string("cs161119");
}


