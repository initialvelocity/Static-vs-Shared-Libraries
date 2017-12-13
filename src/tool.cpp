// Tool to say hello!
#include<iostream> 
#include "../include/simplelogging.h"

int main(int argc, char **argv){
    SimpleLogging logger;
    logger.enableColors();
    logger.info("Starting tool");
    logger.info("Checking if atleast one argument is given");
    if( argc < 2 ){
    logger.error("Fatal error. Need atleast one argument!\n\n");
    return 1;
    }
    if( argc >= 3 ){
    logger.warning("Will say hello using the first argument only!");
    }
    logger.info("Greeting now ...");
    std::cout << "\n Hello " << argv[1];
    logger.info("Closing tool\n\n");
    return 0;
}
