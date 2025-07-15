# 24.20-Gameserver

## How to fix kick

1. Go to your Backend's folder
2. Find DefaultEngine.ini
3. Paste this on a new line
```ini
[ConsoleVariables]
net.AllowEncryption=0
```
