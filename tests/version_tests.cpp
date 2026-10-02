#include "backup_tool/version.hpp"

#include <iostream>
#include <string_view>

int main()
{
    constexpr std::string_view expected_version{"0.1.0"};
    const std::string_view actual_version = backup_tool::version();

    if (actual_version != expected_version)
    {
        std::cerr << "Expected version " << expected_version
                  << ", but received " << actual_version << '\n';

        return 1;
    }

    return 0;
}