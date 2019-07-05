[Variables]
font=Segoe UI Light
color1=255,255,255,255
color2=255,255,255,192
color3=255,255,255,128
color4=41,41,41,153
color5=0,0,0,153

12hr=0
metric=0
sun1st=0
showBat=1
rate=5

; Language must be all lowercase to work. Not all languages are supported, if yours isn't, nothing will appear.
; I don't own the site and can't do anything about adding your preferred language.
; Changing the url will cause the word of the day skin to stop working entirely.
lang=korean
wotdURL=http://feeds.feedblitz.com/#lang#-word-of-the-day&x=1

; For 'loc' use zipcode in US, if outside US: use the location code for your city found at https://weather.codes/
loc=68131
units=f
wxURL=http://wxdata.weather.com/wxdata/weather/local/#loc#?cc=*&unit=#units#&dayf=8
; Comment out above line amd uncomment below line to prevent server requests during weather regExp debugging
;wxURL=file:///D:\Documents\Rainmeter\Skins\frame\Weather\WebParserDump.txt

; 'maxDown' and 'maxUp' are the download and upload speed of your connection in *Bits* per second
; Most ISPs and speed tests report speeds in Mbps (Mega*bits* per second), which is different than MBps (Mega*bytes* per second)
; If it is reported in MBps (Bytes), use google's conversion tool at https://www.google.com/search?q=megabytes+to+bits
maxDown=100000000
maxUp=10000000

res=3840x2160
block=16
frameX=960
frameY=540
frameW=1920
frameH=1080
baseX=944
baseY=428
