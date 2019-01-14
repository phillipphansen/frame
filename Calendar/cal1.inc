[cWD1];Calc weekday 1
Measure=Calc
Formula=#sun#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#sun#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7)

[cWD2]
Measure=Calc
Formula=#mon#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#mon#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7)

[cWD3]
Measure=Calc
Formula=#tue#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#tue#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7)

[cWD4]
Measure=Calc
Formula=#wed#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#wed#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7)

[cWD5]
Measure=Calc
Formula=#thu#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#thu#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7)

[cWD6]
Measure=Calc
Formula=#fri#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#fri#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7)

[cWD7]
Measure=Calc
Formula=(#sat#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#sat#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7)) = 0 ? 7 : (#sat#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury)-7*FLOOR((#sat#-FLOOR((5*mYear)/4)-cMonthCode+(2*cCentury))/7))

;=| METERS/SPECIFIC MEASURES |==============================================

;Day Labels-------------------------
[lDay1]
Meter=String
MeterStyle=sGlobal | sLabels
Text=#day7text#
X=(#block#*9)

[lDay2]
Meter=String
MeterStyle=sGlobal | sLabels
Text=#day1text#

[lDay3]
Meter=String
MeterStyle=sGlobal | sLabels
Text=#day2text#

[lDay4]
Meter=String
MeterStyle=sGlobal | sLabels
Text=#day3text#

[lDay5]
Meter=String
MeterStyle=sGlobal | sLabels
Text=#day4text#

[lDay6]
Meter=String
MeterStyle=sGlobal | sLabels
Text=#day5text#

[lDay7]
Meter=String
MeterStyle=sGlobal | sLabels
Text=#day6text#

;Week 1 Begin-----------------------------------------------
[cDay11]
Measure=Calc
Formula=cWD1

[cDay11Draw]
Measure=Calc
Formula=(#sun# = cMonthStart) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dDay11][!HideMeter dPrevDay11]
IfBelowValue=0
IfBelowAction=[!HideMeter dDay11][!ShowMeter dPrevDay11]

[cPrevMonthDay11]
Measure=Calc
Formula=cPrevDayCount - cPrevMonthEnd + #sun#

[cToday11Draw]
Measure=Calc
Formula=(mDay = cDay11) && (cDay11Draw = 1) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dToday11][!HideMeter dDay11]
IfBelowValue=0
IfBelowAction=[!HideMeter dToday11]

[dDay11]
Meter=String
MeasureName=cDay11
MeterStyle=sGlobal | sMonthDays | sWkStartDay

[dToday11]
Meter=String
MeasureName=cDay11
MeterStyle=sGlobal | sToday

[dPrevDay11]
Meter=String
MeasureName=cPrevMonthDay11
MeterStyle=sGlobal | sOtherDays

[cDay12]
Measure=Calc
Formula=cWD2

[cDay12Draw]
Measure=Calc
Formula=(cDay11Draw = 1) || (#mon# = cMonthStart) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dDay12][!HideMeter dPrevDay12]
IfBelowValue=0
IfBelowAction=[!HideMeter dDay12][!ShowMeter dPrevDay12]

[cPrevMonthDay12]
Measure=Calc
Formula=cPrevDayCount - cPrevMonthEnd + #mon#

[cToday12Draw]
Measure=Calc
Formula=(mDay = cDay12) && (cDay12Draw = 1) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dToday12][!HideMeter dDay12]
IfBelowValue=0
IfBelowAction=[!HideMeter dToday12]

[dDay12]
Meter=String
MeasureName=cDay12
MeterStyle=sGlobal | sMonthDays

[dToday12]
Meter=String
MeasureName=cDay12
MeterStyle=sGlobal | sToday

[dPrevDay12]
Meter=String
MeasureName=cPrevMonthDay12
MeterStyle=sGlobal | sOtherDays

[cDay13]
Measure=Calc
Formula=cWD3

[cDay13Draw]
Measure=Calc
Formula=(cDay12Draw = 1) || (#tue# = cMonthStart) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dDay13][!HideMeter dPrevDay13]
IfBelowValue=0
IfBelowAction=[!HideMeter dDay13][!ShowMeter dPrevDay13]

[cPrevMonthDay13]
Measure=Calc
Formula=cPrevDayCount - cPrevMonthEnd + #tue#

[cToday13Draw]
Measure=Calc
Formula=(mDay = cDay13) && (cDay13Draw = 1) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dToday13][!HideMeter dDay13]
IfBelowValue=0
IfBelowAction=[!HideMeter dToday13]

[dDay13]
Meter=String
MeasureName=cDay13
MeterStyle=sGlobal | sMonthDays

[dToday13]
Meter=String
MeasureName=cDay13
MeterStyle=sGlobal | sToday

[dPrevDay13]
Meter=String
MeasureName=cPrevMonthDay13
MeterStyle=sGlobal | sOtherDays

[cDay14]
Measure=Calc
Formula=cWD4

[cDay14Draw]
Measure=Calc
Formula=(cDay13Draw = 1) || (#wed# = cMonthStart) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dDay14][!HideMeter dPrevDay14]
IfBelowValue=0
IfBelowAction=[!HideMeter dDay14][!ShowMeter dPrevDay14]

[cPrevMonthDay14]
Measure=Calc
Formula=cPrevDayCount - cPrevMonthEnd + #wed#

[cToday14Draw]
Measure=Calc
Formula=(mDay = cDay14) && (cDay14Draw = 1) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dToday14][!HideMeter dDay14]
IfBelowValue=0
IfBelowAction=[!HideMeter dToday14]

[dDay14]
Meter=String
MeasureName=cDay14
MeterStyle=sGlobal | sMonthDays

[dToday14]
Meter=String
MeasureName=cDay14
MeterStyle=sGlobal | sToday

[dPrevDay14]
Meter=String
MeasureName=cPrevMonthDay14
MeterStyle=sGlobal | sOtherDays

[cDay15]
Measure=Calc
Formula=cWD5

[cDay15Draw]
Measure=Calc
Formula=(cDay14Draw = 1) || (#thu# = cMonthStart) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dDay15][!HideMeter dPrevDay15]
IfBelowValue=0
IfBelowAction=[!HideMeter dDay15][!ShowMeter dPrevDay15]

[cPrevMonthDay15]
Measure=Calc
Formula=cPrevDayCount - cPrevMonthEnd + #thu#

[cToday15Draw]
Measure=Calc
Formula=(mDay = cDay15) && (cDay15Draw = 1) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dToday15][!HideMeter dDay15]
IfBelowValue=0
IfBelowAction=[!HideMeter dToday15]

[dDay15]
Meter=String
MeasureName=cDay15
MeterStyle=sGlobal | sMonthDays

[dToday15]
Meter=String
MeasureName=cDay15
MeterStyle=sGlobal | sToday

[dPrevDay15]
Meter=String
MeasureName=cPrevMonthDay15
MeterStyle=sGlobal | sOtherDays

[cDay16]
Measure=Calc
Formula=cWD6

[cDay16Draw]
Measure=Calc
Formula=(cDay15Draw = 1) || (#fri# = cMonthStart) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dDay16][!HideMeter dPrevDay16]
IfBelowValue=0
IfBelowAction=[!HideMeter dDay16][!ShowMeter dPrevDay16]

[cPrevMonthDay16]
Measure=Calc
Formula=cPrevDayCount - cPrevMonthEnd + #fri#

[cToday16Draw]
Measure=Calc
Formula=(mDay = cDay16) && (cDay16Draw = 1) ? 1 : -1
IfAboveValue=0
IfAboveAction=[!ShowMeter dToday16][!HideMeter dDay16]
IfBelowValue=0
IfBelowAction=[!HideMeter dToday16]

[dDay16]
Meter=String
MeasureName=cDay16
MeterStyle=sGlobal | sMonthDays

[dToday16]
Meter=String
MeasureName=cDay16
MeterStyle=sGlobal | sToday

[dPrevDay16]
Meter=String
MeasureName=cPrevMonthDay16
MeterStyle=sGlobal | sOtherDays