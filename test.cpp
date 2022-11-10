#include "logger.h"

int main(void) {

    logger _logger;
    _logger.log("hello", mood::bad);
    _logger.log(", world!", mood::good);

}