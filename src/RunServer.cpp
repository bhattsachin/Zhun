/*
 * RunServer.cpp
 *
 *  Created on: Sep 16, 2011
 *      Author: bhatt
 */

/**
 * Entry point for this engine
 * configures controller based on config files
 * initializes required instances & calls required classes
 */
#include "utilities/Library.h"
#include "controller/ParsingIndexingController.h"
using namespace std;

int main(int argc, char** argv) {
	time_t start, end;
	double diff;
	cout<<"argc:"<<argc<<" argv:"<<argv[1]<<endl;
	if (argc < 1) {
		cout << "USAGE: give /data path as input " << endl;
		return 0;
	}
	string base_dir = argv[1];
	time(&start);
	ParsingIndexingController contoller;
	contoller.configureEngine(base_dir);
	time(&end);
	diff = difftime(end, start);
	cout << "Total time taken for execution:" << diff << " seconds" << endl;

}

