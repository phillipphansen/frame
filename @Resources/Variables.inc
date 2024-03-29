[Variables]
font=Segoe UI Light
color1=255,255,255,255
color2=255,255,255,192
color3=255,255,255,128
color4=32,32,32,192
color5=0,0,0,178

12hr=0
sun1st=0
showBat=1
rate=5
dark=1
clear=0
blur=Acrylic
locCheck=1

; Language must be all lowercase to work. Not all languages are supported, if yours isn't, nothing will appear.
; I don't own the site and can't do anything about adding your preferred language.
; Changing the url will cause the word of the day skin to stop working entirely.
wotdLang=korean
wotdURL=http://feeds.feedblitz.com/#wotdLang#-word-of-the-day&x=1
;wotdURL=file:///#@#debug\feed.html

; For 'loc' use zipcode in US, if outside US: use the location code for your city found at https://weather.codes/
loc=Omaha,US
city=Omaha, US         
lat=41.2587459
lon=-95.9383758
api=b4cb72466dddae9e569fe7f5f335d193
wxUnits=imperial
wxLang=en
geoURL=https://api.openweathermap.org/geo/1.0/direct?q=#loc#&limit=1&appid=#api#
;geoURL=file:///#@#debug\direct.json
wxURL=https://api.openweathermap.org/data/2.5/onecall?lat=#lat#&lon=#lon#&units=#wxUnits#&lang=#wxLang#&exclude=minutely,hourly&appid=#api#
; Comment out above line amd uncomment below line to prevent server requests during weather regExp debugging
;wxURL=file:///#@#debug\onecall.json

; 'maxDown' and 'maxUp' are the download and upload speed of your connection in *Bits* per second
; Most ISPs and speed tests report speeds in Mbps (Mega*bits* per second), which is different than MBps (Mega*bytes* per second)
; If it is reported in MBps (Bytes), use google's conversion tool at https://www.google.com/search?q=megabytes+to+bits
maxDown=1000000000
maxUp=100000000

res=3840x2160
block=16
frameX=960
frameY=540
frameW=1920
frameH=1080
baseX=960
baseY=444
