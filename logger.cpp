#include "logger.h"
#include <ostream>

logger::logger() {
    s_out.open("log.txt");
}

logger::~logger() {
    s_out.close();
}

void logger::log(std::string msg, mood mood) {

    switch (mood) {
        case bad:
        s_out << "error: " << msg; break;
        case standard:
        s_out << "standard: " << msg; break;
        case good:
        s_out << "good: " << msg; break;
    }

    s_out << std::endl;

    return;
}