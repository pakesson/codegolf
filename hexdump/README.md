# Hexdump

```
$ wc -c hexdump_golf.c
229 hexdump_golf.c
```

## Compiling
```
$ gcc --include stdio.h -o hexdump hexdump_golf.c
```

## Usage
```
$ ./hexdump /bin/sh
00000000 7F 45 4C 46 02 01 01 00 00 00 00 00 00 00 00 00  .ELF............
00000010 03 00 3E 00 01 00 00 00 20 4A 00 00 00 00 00 00  ..>..... J......
00000020 40 00 00 00 00 00 00 00 58 D3 01 00 00 00 00 00  @.......X.......
00000030 00 00 00 00 40 00 38 00 09 00 40 00 1C 00 1B 00  ....@.8...@.....
00000040 06 00 00 00 04 00 00 00 40 00 00 00 00 00 00 00  ........@.......
[...]
0001DA10 00 00 00 00 00 00 00 00 01 00 00 00 03 00 00 00  ................
0001DA20 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
0001DA30 54 D2 01 00 00 00 00 00 01 01 00 00 00 00 00 00  T...............
0001DA40 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00  ................
0001DA50 00 00 00 00 00 00 00 00                          ........
```
