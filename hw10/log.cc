#include "log.h"
#include <iostream>

log::log(){
}

const log& log::getInstance(){
	static log instance;
	return instance;
}

void log::logP(const std::string& msg){
	std::cout<<msg<<std::endl;
}