# 24.20-Gameserver

The long load times is unfixable without a custom client, if you would like to do it yourself patch this function to return false:

Search "warmup mode" in strings or on this cl its `0x99CEB00`

## How to fix kick

1. Go to your Backend's folder
2. Find DefaultEngine.ini
3. Paste this on a new line
```ini
[ConsoleVariables]
net.AllowEncryption=0
```

### Todo
- [x] Equipping
- [ ] Storm
- [ ] Looting
- [ ] Building
- [ ] Editing
