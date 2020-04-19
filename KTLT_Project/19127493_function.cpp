﻿#include "19127048.h"
#include "19127493.h"

void printCardsShuffling(int deck[][RANKS], const char* suits[], const char* faces[]) {
	
	int key = 1;
	int time = 0;
	for (time; time < 52; time++)
		for (int i = 0; i < SUITS; i++)
			for (int j = 0; j < RANKS; j++)
				if (deck[i][j] == key) {
					cout << "(" << suits[i] << ", " << faces[j] << ")" << endl;
					key++;
				}
}

void printHand(int** hand,const char* suits[],const char* faces[]) {
	for (int i = 0; i < 5; i++)
		cout << "(" << suits[hand[i][0]] << ", " << faces[hand[i][1]] << ")" << endl;
}