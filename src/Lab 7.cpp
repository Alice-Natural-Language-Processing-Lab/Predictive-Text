//============================================================================
// Name        : Lab.cpp
// Author      : Korey Mitchell, Matt Lee
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MakeSeuss.hpp"


using namespace std;

int main() {

	// Additional Information File attached

	srand(time(NULL));

	makeSeuss s1 = makeSeuss("DrSeuss.txt", "File3.txt", true, true);
		return 0;
}
