*version 9.1 105907912
u 48
V? 2
R? 8
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
pageloc 1 0 2490 
@status
n 0 122:06:02:17:26:31;1656764791 e 
s 2832 122:06:02:17:26:34;1656764794 e 
*page 1 0 970 720 iA
@ports
port 46 GND_EARTH 470 380 h
@parts
part 2 VDC 220 220 h
a 1 u 13 0 -11 18 hcn 100 DC=10V
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
part 21 r 470 240 u
a 0 u 13 0 15 25 hln 100 VALUE=5
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R5
a 0 ap 9 0 15 0 hln 100 REFDES=R5
part 19 r 340 200 v
a 0 u 13 0 15 25 hln 100 VALUE=2
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=R1
a 0 xp 9 0 15 0 hln 100 REFDES=R1
part 20 r 340 330 v
a 0 u 13 0 15 25 hln 100 VALUE=8
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R4
a 0 ap 9 0 15 0 hln 100 REFDES=R4
part 22 r 560 160 d
a 0 u 13 0 15 25 hln 100 VALUE=10
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=R2
a 0 xp 9 0 15 0 hln 100 REFDES=R2
part 23 r 560 290 d
a 0 u 13 0 15 25 hln 100 VALUE=2
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=R3
a 0 xp 9 0 15 0 hln 100 REFDES=R3
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 37
s 560 160 560 110 36
s 220 220 220 110 3
s 220 110 340 110 5
s 340 110 340 160 24
s 560 110 340 110 38
w 27
s 340 200 340 240 26
s 340 240 340 290 42
s 430 240 340 240 40
w 35
s 560 290 560 240 34
s 560 240 560 200 45
s 470 240 560 240 43
w 14
s 220 260 220 380 13
s 220 380 340 380 15
s 340 330 340 380 28
s 340 380 470 380 30
s 560 380 560 330 32
s 470 380 560 380 47
@junction
j 220 260
+ p 2 -
+ w 14
j 340 290
+ p 20 2
+ w 27
j 340 200
+ p 19 1
+ w 27
j 340 330
+ p 20 1
+ w 14
j 340 380
+ w 14
+ w 14
j 560 330
+ p 23 2
+ w 14
j 560 290
+ p 23 1
+ w 35
j 220 220
+ p 2 +
+ w 37
j 340 160
+ p 19 2
+ w 37
j 340 110
+ w 37
+ w 37
j 430 240
+ p 21 2
+ w 27
j 340 240
+ w 27
+ w 27
j 470 240
+ p 21 1
+ w 35
j 560 240
+ w 35
+ w 35
j 470 380
+ s 46
+ w 14
j 560 200
+ p 22 2
+ w 35
j 560 160
+ p 22 1
+ w 37
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
