#ifndef DATASTORAGE_HPP
#define DATASTORAGE_HPP

#include "Libraries.hpp"

class DataStorage {
public:
    static std::string root;
    static std::map<int, std::string> defaultErrorPages;
    static std::map<std::string, std::string> MimeTypes;
private:
    static std::string getCurrentWorkingDirectory();

    static void initDefaultErrorPages();

    static std::map<std::string, std::string> initMimeTypes();
};

#endif