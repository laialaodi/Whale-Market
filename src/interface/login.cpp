#include "interface/login.h"
#include "tools/hint.h"

#include <iostream>
#include <map>

int login()
{
    std::string username, password;
    welcomeMessage();
    std::cout << "Please login\n";
    std::cout << "Please input your username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;
}