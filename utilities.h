//
//  utilities.hpp
//  stars
//
//  Created by Maeneka Grewal on 11/8/17.
//  Copyright © 2017 Maeneka Grewal. All rights reserved.
//
// utilities.h

const int MINWORDLEN = 4;
const int MAXWORDLEN = 6;

int getWords(char words[][MAXWORDLEN+1], int maxWords, const char wordfilename[]);
int randInt(int min, int max);
