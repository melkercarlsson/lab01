#include <iostream>

#include "hello.h"

void hello(const char *name, int count)
{

    if (count != 0 && count != -1)
    {
        std::cout << "Hello, ";

        for (int n = 0; n < count; ++n)
        {
            std::cout << name;

            if (n != count - 1)
            {
                std::cout << " ";
            }
        }
        std::cout << "!" << std::endl;
    }
}

std::pair<const char *, int> parse_args(int argc, char *argv[])
{

    if (argc == 1)
    {
        return std::make_pair("world", 1);
    }
    else if (argc == 2)
    {
        return std::make_pair(argv[1], 1);
    }
    else if (argc == 3)
    {
        if (*argv[2] == '0')
        {
            return std::make_pair(argv[1], 0);
        }

        else if (std::atoi(argv[2]) <= 0)
        {
            std::cerr << "error: 2nd argument must be an integral greater than zero!";
            return std::make_pair("", -1);

        }

        return std::make_pair(argv[1], std::atoi(argv[2]));
    }
    else
    {
        std::cerr << "error: Too many arguments!";
        return std::make_pair("", -1);
    }
}