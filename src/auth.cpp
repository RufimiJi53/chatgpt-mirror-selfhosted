// auth.cpp — part of chatgpt-mirror-selfhosted.

#include "chatgptmirrorselfhosted/auth.h"

#include <cstdio>

namespace chatgptmirrorselfhosted {

Auth::Auth(const std::string& config_path)
    : config_path_(config_path) {}

void Auth::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Auth::run() {
    if (verbose_) std::fprintf(stderr, "[chatgpt-mirror-selfhosted] auth: run\n");
    // core logic lives here
    return true;
}

}  // namespace chatgptmirrorselfhosted
