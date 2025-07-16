# 24.20-Gameserver

**Build download: http://r2.ploosh.dev/24.20.zip**

The long load times is unfixable without a custom client, if you would like to do it yourself patch this function to return false:

Search "warmup mode" in strings or on this cl its `0x99CEB00`

## Credits
Ploosh - Fixed my replication and gave me all patches, also fixed editing bug.

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
- [x] Building
- [x] Editing
- [ ] Pawn Death

