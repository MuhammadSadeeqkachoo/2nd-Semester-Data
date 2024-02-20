*version 9.1 856246862
u 66
V? 2
R? 4
? 3
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
pageloc 1 0 2040 
@status
n 0 122:04:18:22:47:59;1652896079 e 
s 2832 122:04:25:21:42:40;1653496960 e 
*page 1 0 970 720 iA
@ports
port 38 GND_EARTH 320 260 h
@parts
part 4 r 440 220 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
a 0 u 13 0 15 25 hln 100 VALUE=1
part 5 r 440 300 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
a 0 u 13 0 15 25 hln 100 VALUE=2k
part 3 r 440 100 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
a 0 u 13 0 15 25 hln 100 VALUE=3k
part 2 VDC 310 160 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=25V
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
@conn
w 57
a 0 up 0:33 0 0 0 hln 100 V=
s 610 260 520 260 16
s 520 220 520 260 6
s 610 100 610 260 14
a 0 up 33 0 612 180 hlt 100 V=
s 520 220 480 220 49
s 480 100 610 100 12
s 520 260 520 300 18
s 520 300 480 300 50
w 23
a 0 up 0:33 0 0 0 hln 100 V=
s 440 100 310 100 22
a 0 up 33 0 375 99 hct 100 V=
s 310 100 310 160 24
w 53
a 0 up 0:33 0 0 0 hln 100 V=
s 400 260 320 260 26
a 0 up 33 0 360 259 hct 100 V=
s 320 260 310 260 39
s 310 260 310 200 29
s 400 260 400 220 28
s 400 220 440 220 41
s 400 300 400 260 10
s 400 300 440 300 42
@junction
j 310 160
+ p 2 +
+ w 23
j 310 200
+ p 2 -
+ w 53
j 320 260
+ s 38
+ w 53
j 440 220
+ p 4 1
+ w 53
j 400 260
+ w 53
+ w 53
j 440 300
+ p 5 1
+ w 53
j 480 220
+ p 4 2
+ w 57
j 520 260
+ w 57
+ w 57
j 480 300
+ p 5 2
+ w 57
j 440 100
+ p 3 1
+ w 23
j 480 100
+ p 3 2
+ w 57
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
