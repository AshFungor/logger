#include <iostream>
#include <fstream>
#include <string>

// защита от многократного включения файла
#ifndef LOGGER00_H_
#define LOGGER00_H_

enum mood : short {
    good = 0, standard, bad
};

class logger {

private:
    std::ofstream s_out;

public:
    logger ();
    void log(std::string msg, mood mood);
    ~logger();
    


};

#endif