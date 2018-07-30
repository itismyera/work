#include "common.h"
#include "string_util.h"

using namespace work;

int main(int argc, char **argv) {
    string src = " OK";
    std::cout << StringUtil::trim(src) << std::endl;
    //std::cout << "fuck love" << std::endl;
    return 0;
}