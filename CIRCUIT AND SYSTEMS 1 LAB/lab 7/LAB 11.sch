*version 9.1 714150277
u 34
V? 2
R? 2
U? 2
C? 2
? 3
@libraries
@analysis
.TRAN 1 0 1 0
+0 0ns
+1 1000000ns
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
pageloc 1 0 2049 
@status
n 0 122:05:26:16:10:34;1656241834 e 
s 2832 122:05:26:16:18:10;1656242290 e 
*page 1 0 970 720 iA
@ports
port 26 GND_EARTH 450 290 h
@parts
part 2 VDC 280 210 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=20V
part 3 r 380 130 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
a 0 u 13 0 15 25 hln 100 VALUE=10
part 21 c 520 220 v
a 0 sp 0 0 0 10 hlb 100 PART=c
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=CK05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=C1
a 0 ap 9 0 15 0 hln 100 REFDES=C1
a 0 u 13 0 11 37 hln 100 VALUE=10u
part 4 Sw_tClose 310 120 h
a 0 sp 0 0 0 24 hln 100 PART=Sw_tClose
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U1
a 0 ap 9 0 0 20 hln 100 REFDES=U1
a 0 u 13 13 -10 -12 hln 100 tClose=0.1ms
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
part 29 nodeMarker 520 130 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=2
@conn
w 12
a 0 up 0:33 0 0 0 hln 100 V=
s 310 130 280 130 11
s 280 130 280 210 13
a 0 up 33 0 282 170 hlt 100 V=
w 16
a 0 up 0:33 0 0 0 hln 100 V=
s 280 250 280 290 15
s 280 290 450 290 17
a 0 up 33 0 365 289 hct 100 V=
s 520 220 520 290 24
s 450 290 520 290 27
w 8
a 0 up 0:33 0 0 0 hln 100 V=
s 420 130 520 130 7
a 0 up 33 0 470 129 hct 100 V=
s 520 130 520 190 22
w 6
a 0 up 0:33 0 0 0 hln 100 V=
s 350 130 380 130 5
a 0 up 33 0 365 139 hct 100 V=
@junction
j 450 290
+ s 26
+ w 16
j 520 190
+ p 21 2
+ w 8
j 520 220
+ p 21 1
+ w 16
j 420 130
+ p 3 2
+ w 8
j 520 130
+ p 29 pin1
+ w 8
j 380 130
+ p 3 1
+ w 6
j 280 210
+ p 2 +
+ w 12
j 280 250
+ p 2 -
+ w 16
j 350 130
+ p 4 2
+ w 6
j 310 130
+ p 4 1
+ w 12
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
