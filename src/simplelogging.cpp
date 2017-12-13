#include "../include/simplelogging.h"
SimpleLogging::SimpleLogging(){
    _infoColor = "";
    _warningColor = "";
    _errorColor = "";
    _normalColor = "";
}
void SimpleLogging::enableColors(){
    _infoColor = "\e[97m";
    _warningColor = "\e[33m";
    _errorColor = "\e[31m";
    _normalColor = "\e[0m";
}
void SimpleLogging::log(int level, std::string msg){
    switch(level){
        case LOG_INFO:
            std::cout << "\n" << _infoColor << "INFO : " << msg << _normalColor;
            break;
        case LOG_WARNING:
            std::cout << "\n" << _warningColor << "WARN : " << msg << _normalColor;
            break;
        case LOG_ERROR:
            std::cerr << "\n" << _errorColor << "ERR  : " << msg << _normalColor;
            break;
        default:
            std::cout << "\n" << _infoColor << "INFO : " << msg << _normalColor;
    }
}
void SimpleLogging::info(std::string msg){
    this->log(LOG_INFO, msg);
}
void SimpleLogging::warning(std::string msg){
    this->log(LOG_WARNING, msg);
}
void SimpleLogging::error(std::string msg){
    this->log(LOG_ERROR, msg);
}

/* Only for testing
int main(int argc, char **argv){
    SimpleLogging logger;
    logger.enableColors();
    logger.info("Just an information");
    logger.warning("Something went wrong but it's ok!");
    logger.error("This is not correct! Please look into it!");
    std::cout << "\n\n";
    return 0;
}
*/
