#include <backup_tool/version.hpp>
#include <iostream>

int main()
{
    std::cout << "backup-tool version " << backup_tool::version() << "\n";
    return 0;
}