#include "log.h"
#include <iostream>

log::log(){
}

log::~log(){
}

const log& log::getInstance(){
	static log instance;
	return instance;
}

void log::logP(){
	std::cout<<"test"<<std::endl;
}