# EZ-Admin APT Repository

Official APT repository for EZ-Admin - Easy Linux System Administration Tool

## Installation

### Step 1: Add the repository

```bash
# Add the repository to your sources
echo "deb [trusted=yes] https://therealONE12.github.io/EZ-Admin/apt-repo stable main" | sudo tee /etc/apt/sources.list.d/ez-admin.list
```

### Step 2: Update and install

```bash
# Update package lists
sudo apt update

# Install EZ-Admin
sudo apt install ez-admin
```

## Usage

After installation, run:
```bash
sudo ez-admin
```

## Uninstall

```bash
sudo apt remove ez-admin
sudo rm /etc/apt/sources.list.d/ez-admin.list
```

## About

- **Maintainer**: TherealONE12
- **Homepage**: https://github.com/TherealONE12/EZ-Admin
- **Issues**: https://github.com/TherealONE12/EZ-Admin/issues

## Features

- System updates and cleanup
- Install popular tools
- SWAP file management
- Docker and Ollama installation
- And more!
