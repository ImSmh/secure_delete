#include "Application.h"


namespace sd
{

int Application::run(int argc, char *argv[])
{
    for(int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << std::endl;
    }

    return 0;
}

}

