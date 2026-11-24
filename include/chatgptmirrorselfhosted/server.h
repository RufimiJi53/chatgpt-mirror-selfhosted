// server — part of chatgpt-mirror-selfhosted.

#pragma once

#include <string>
#include <vector>

namespace chatgptmirrorselfhosted {

class Server {
public:
    explicit Server(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace chatgptmirrorselfhosted
