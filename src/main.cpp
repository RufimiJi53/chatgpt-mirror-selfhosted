// main.cpp — entry point. Wires config and subsystems together.

#include "chatgptmirrorselfhosted/settings.h"
#include "chatgptmirrorselfhosted/server.h"
#include "chatgptmirrorselfhosted/auth.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    chatgptmirrorselfhosted::Settings settings = chatgptmirrorselfhosted::Settings::load_default();
    chatgptmirrorselfhosted::Server server(settings.store_path);
    chatgptmirrorselfhosted::Auth auth(settings.store_path);
    std::fprintf(stderr, "[chatgpt-mirror-selfhosted] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
