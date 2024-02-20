*version 9.1 366209981
u 408
R? 33
V? 13
T? 2
? 4
I? 2
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
pageloc 1 0 2775 
@status
n 0 122:05:15:19:20:36;1655302836 e 
s 2832 122:05:15:19:20:39;1655302839 e 
*page 1 0 970 720 iA
@ports
port 265 GND_EARTH 940 130 h
port 300 GND_EARTH 570 390 h
@parts
part 268 VDC 690 60 h
a 1 u 13 0 -11 18 hcn 100 DC=5.676
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V12
a 1 ap 9 0 24 7 hcn 100 REFDES=V12
part 254 r 830 30 h
a 0 u 13 0 15 25 hln 100 VALUE=25
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R30
a 0 ap 9 0 15 0 hln 100 REFDES=R30
part 253 r 750 30 h
a 0 u 13 0 15 25 hln 100 VALUE=3.5675
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R29
a 0 ap 9 0 15 0 hln 100 REFDES=R29
part 286 ISRC 320 380 u
a 0 a 0:13 0 0 0 hln 100 PKGREF=I1
a 1 ap 9 0 20 10 hcn 100 REFDES=I1
a 1 u 0 0 0 0 hcn 100 DC=1.591030
part 298 r 570 360 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R32
a 0 ap 9 0 15 0 hln 100 REFDES=R32
a 0 u 13 0 15 31 hln 100 VALUE=25
part 297 r 470 360 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R31
a 0 ap 9 0 15 0 hln 100 REFDES=R31
a 0 u 13 0 15 43 hln 100 VALUE=3.5675
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
@conn
w 256
a 0 up 0:33 0 0 0 hln 100 V=
s 790 30 830 30 255
a 0 up 33 0 818 35 hct 100 V=
w 252
a 0 up 0:33 0 0 0 hln 100 V=
s 690 30 750 30 251
a 0 up 33 0 726 33 hct 100 V=
s 690 60 690 30 271
w 258
a 0 up 0:33 0 0 0 hln 100 V=
s 870 30 940 30 257
s 940 30 940 130 259
s 940 130 690 130 261
a 0 up 33 0 815 129 hct 100 V=
s 690 130 690 100 263
w 288
a 0 up 0:33 0 0 0 hln 100 V=
s 570 390 570 360 295
s 470 390 570 390 293
s 470 390 470 360 291
s 320 390 470 390 289
a 0 up 33 0 395 389 hct 100 V=
s 320 380 320 390 287
w 278
a 0 up 0:33 0 0 0 hln 100 V=
s 320 300 320 340 284
s 470 300 470 320 281
s 470 300 570 300 283
s 570 300 570 320 279
s 320 300 470 300 277
a 0 up 33 0 395 299 hct 100 V=
@junction
j 830 30
+ p 254 1
+ w 256
j 790 30
+ p 253 2
+ w 256
j 750 30
+ p 253 1
+ w 252
j 690 60
+ p 268 +
+ w 252
j 870 30
+ p 254 2
+ w 258
j 940 130
+ s 265
+ w 258
j 690 100
+ p 268 -
+ w 258
j 570 360
+ p 298 1
+ w 288
j 570 390
+ s 300
+ w 288
j 470 360
+ p 297 1
+ w 288
j 470 390
+ w 288
+ w 288
j 320 380
+ p 286 +
+ w 288
j 320 340
+ p 286 -
+ w 278
j 470 320
+ p 297 2
+ w 278
j 570 320
+ p 298 2
+ w 278
j 470 300
+ w 278
+ w 278
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
