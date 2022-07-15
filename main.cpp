#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("build {}", build());
    logger->info("Hello.World!");

    return 0;
}
