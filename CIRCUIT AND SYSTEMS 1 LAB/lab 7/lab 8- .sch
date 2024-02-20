*version 9.1 519220760
u 145
R? 17
V? 3
? 2
@libraries
@analysis
@targets
@attributes
@translators
a 0 u 13 0 0 0 hln 100 PCBOARDS=PCB
a 0 u 13 0 0 0 hln 100 PSPICE=PSPICE
a 0 u 13 0 0 0 hln 100 XILINX=XILINX
@setup
unconnectedPins 0
connectViaLabel 0
connectViaLocalLabels 0
NoStim4ExtIFPortsWarnings 1
AutoGenStim4ExtIFPorts 1
@index
pageloc 1 0 3077 
@status
n 0 122:05:15:22:39:48;1655314788 e 
s 2832 122:05:15:22:39:52;1655314792 e 
*page 1 0 970 720 iA
@ports
port 83 GND_EARTH 410 370 h
@parts
part 51 r 200 210 v
a 0 x 0:13 0 0 0 hln 100 PKGREF=R13
a 0 xp 9 0 15 0 hln 100 REFDES=R13
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 u 13 0 15 25 hln 100 VALUE=2
part 65 VDC 200 300 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 1 u 13 0 -11 18 hcn 100 DC=10V
a 0 x 0:13 0 0 0 hln 100 PKGREF=V6
a 1 xp 9 0 24 7 hcn 100 REFDES=V6
part 52 r 410 200 v
a 0 x 0:13 0 0 0 hln 100 PKGREF=R17
a 0 xp 9 0 15 0 hln 100 REFDES=R17
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 u 13 0 15 25 hln 100 VALUE=2
part 27 r 270 120 h
a 0 x 0:13 0 0 0 hln 100 PKGREF=R16
a 0 xp 9 0 15 0 hln 100 REFDES=R16
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 u 13 0 15 27 hln 100 VALUE=10
part 79 r 410 330 v
a 0 u 13 0 15 25 hln 100 VALUE=5
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=R15
a 0 xp 9 0 15 0 hln 100 REFDES=R15
part 28 r 270 240 h
a 0 x 0:13 0 0 0 hln 100 PKGREF=R14
a 0 xp 9 0 15 0 hln 100 REFDES=R14
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 u 13 0 15 25 hln 100 VALUE=8
part 142 r 540 250 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=R
a 0 xp 9 0 15 0 hln 100 REFDES=R
a 0 u 13 0 15 25 hln 100 VALUE=25
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
@conn
w 44
a 0 up 0:33 0 0 0 hln 100 V=
s 270 120 200 120 43
s 200 120 200 170 45
a 0 up 33 0 202 145 hlt 100 V=
w 48
a 0 up 0:33 0 0 0 hln 100 V=
s 200 240 200 210 49
s 270 240 200 240 47
s 200 240 200 300 67
a 0 up 33 0 202 270 hlt 100 V=
w 34
a 0 up 0:33 0 0 0 hln 100 V=
s 410 200 410 240 62
s 310 240 410 240 33
a 0 up 33 0 360 239 hct 100 V=
s 410 240 410 290 77
w 102
a 0 up 0:33 0 0 0 hln 100 V=
s 200 340 200 370 71
s 410 370 200 370 133
a 0 up 33 0 305 369 hct 100 V=
s 410 330 410 370 80
s 540 370 410 370 103
s 540 250 540 370 101
w 124
a 0 up 0:33 0 0 0 hln 100 V=
s 310 120 410 120 31
a 0 up 33 0 360 119 hct 100 V=
s 410 160 410 120 59
s 410 120 540 120 97
s 540 210 540 120 143
@junction
j 200 210
+ p 51 1
+ w 48
j 270 120
+ p 27 1
+ w 44
j 200 170
+ p 51 2
+ w 44
j 200 340
+ p 65 -
+ w 102
j 270 240
+ p 28 1
+ w 48
j 200 300
+ p 65 +
+ w 48
j 200 240
+ w 48
+ w 48
j 310 120
+ p 27 2
+ w 124
j 410 160
+ p 52 2
+ w 124
j 410 120
+ w 124
+ w 124
j 410 200
+ p 52 1
+ w 34
j 410 330
+ p 79 1
+ w 102
j 310 240
+ p 28 2
+ w 34
j 410 290
+ p 79 2
+ w 34
j 410 240
+ w 34
+ w 34
j 410 370
+ s 83
+ w 102
j 540 250
+ p 142 1
+ w 102
j 540 210
+ p 142 2
+ w 124
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
