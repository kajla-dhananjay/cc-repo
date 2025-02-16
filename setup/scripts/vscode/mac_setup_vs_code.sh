#!/bin/bash

SCRIPT_PATH=$(dirname $(realpath "${BASH_SOURCE[0]}"))
source ${SCRIPT_PATH}/common.sh

set -e

if ! command -v brew &> /dev/null
then
  echo "Homebrew not found. Installing Homebrew..."
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
else
  echo "Homebrew is already installed."
fi

if [ "$(brew list --cask | grep visual-studio-code)" ] && [ ! "$(command -v code)" ];
then
  echo "Visual Studio Code is already installed."
  exit 0
else
  echo "Installing Visual Studio Code..."
  brew install --cask visual-studio-code
fi

echo "Installing VS Code extensions..."

code --install-extension ms-vscode.cpptools-extension-pack

code --install-extension ms-vscode-remote.remote-containers

code --install-extension GitHub.copilot

code --install-extension ms-azuretools.vscode-docker

echo "VS Code and extensions have been installed successfully!"

set +e
