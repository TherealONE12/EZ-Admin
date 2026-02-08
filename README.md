# EZ-Admin

**Easy Linux System Administration Tool** - A user-friendly, menu-driven tool for common Linux administrative tasks.

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Version](https://img.shields.io/badge/version-1.0-green.svg)](https://github.com/TherealONE12/EZ-Admin/releases)

## 📦 Installation

### APT Repository (Recommended)

Install with a single command:

```bash
echo "deb [trusted=yes] https://therealONE12.github.io/EZ-Admin/apt-repo stable main" | sudo tee /etc/apt/sources.list.d/ez-admin.list
sudo apt update
sudo apt install ez-admin
```

**Repository Page:** https://therealONE12.github.io/EZ-Admin/apt-repo/

### Manual Installation

Download the latest `.deb` package from [Releases](https://github.com/TherealONE12/EZ-Admin/releases):

```bash
sudo dpkg -i ez-admin_1.0.deb
```

## 🚀 Usage

Run with sudo privileges:

```bash
sudo ez-admin
```

## ✨ Features

EZ-Admin provides easy access to common administrative tasks:

- **System Management**
  - System updates (apt update && upgrade)
  - System cleanup (autoremove && clean)

- **Software Installation**
  - Install Kali Linux top 10 tools
  - Install git
  - Install python3
  - Install BleachBit cleaning tool

- **Advanced Features**
  - Create temporary SWAP RAM
  - Install Ollama AI
  - Install OpenWebUI with Docker
  - Run BleachBit with pre-configured settings

## 📋 Menu Options

```
 0: Show help message
 1: Update System
 2: Cleanup
 3: Install top 10 Tools
 4: Install cleaning Tool (BleachBit)
 5: Install git
 6: Install python3
 7: Make temporary SWAP RAM
 8: Install Ollama
 9: Install OpenWebUI
10: Run Clean Tool with pre-made settings
99: Exit
```

## ⚠️ Requirements

- Linux system with APT package manager (Debian, Ubuntu, Kali Linux, etc.)
- sudo/root privileges
- Internet connection for downloads

## ⚙️ Updating

If you installed via APT repository, updates are automatic:

```bash
sudo apt update
sudo apt upgrade
```

## 🗑️ Uninstall

### If installed via APT:
```bash
sudo apt remove ez-admin
sudo rm /etc/apt/sources.list.d/ez-admin.list
```

### If installed manually:
```bash
sudo dpkg -r ez-admin
```

## 🔒 Security

**IMPORTANT:** This tool requires root privileges. Always review the source code before running any tool with elevated permissions.

The source code is available in this repository for your review.

## 🐛 Bug Reports & Suggestions

Please report bugs and suggestions at:
- **GitHub Issues:** https://github.com/TherealONE12/EZ-Admin/issues
- **HackClub FlavourTown**

## 📝 License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.

## 👤 Author

**TherealONE12**
- GitHub: [@TherealONE12](https://github.com/TherealONE12)
- Email: ThisisMClover@outlook.de

## 🙏 Acknowledgments

- ASCII art from [textart.sh](https://textart.sh/topic/error)
- Thanks to the HackClub FlavourTown community

## 📊 Version History

### v1.0 (2026-02-08)
- Initial release
- Core system administration features
- APT repository for easy installation
- Menu-driven interface

---

**Thank you for using EZ-Admin!** If this tool helps you, please consider starring the repository ⭐
