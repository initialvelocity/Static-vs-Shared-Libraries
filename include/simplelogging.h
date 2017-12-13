#include<iostream>
#include<string>
enum {
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR,
    LOG_DEBUG
};
class SimpleLogging{
    private:
        std::string _infoColor;
        std::string _warningColor;
        std::string _errorColor;
        std::string _normalColor;

    public:
        SimpleLogging();
        void enableColors();
        void log(int level, std::string msg);
        void info(std::string msg);
        void warning(std::string msg);
        void error(std::string msg);
};
