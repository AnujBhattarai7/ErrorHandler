#pragma once

#define EH_PRINT(x)             \
    {                           \
        std::cout << x << "\n"; \
    }
#define EH_PRINT(x)                            \
    {                                          \
        std::cout << "[ERROR]: " << x << "\n"; \
        exit(EXIT_FAILURE);                    \
    }
