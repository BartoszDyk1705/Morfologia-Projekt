#ifndef MYEXCEPTIONS_H
#define MYEXCEPTIONS_H
#include <exception>
#include <string>

class MyExceptions : public std::exception {
    std::string msg;
public:
    explicit MyExceptions(const std::string& message) : msg(message) {}
    const char* what() const noexcept override {
        return msg.c_str();
    }
};
#endif