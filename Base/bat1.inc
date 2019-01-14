[mBat]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent
UpdateDivider=60
OnUpdateAction=[!SetOption dLineBat Y ((#frameH#+(#block#*6)-1)-trunc(((#frameH#-1)/100)*[mBat]))]

[dRAM]
Meter=String
MeterStyle=sText
MeasureName=mRAM
StringAlign=Center
X=((#block#*3)+(#frameW#/4))
Text=RAM %1%
Percentual=1
UpdateDivider=20
MouseOverAction=[!ShowMeterGroup RAM][!Redraw][!HideFade frame\Cover][!HideFade frame\Wotd]
MouseLeaveAction=[!ShowFade frame\Cover][!ShowFade frame\Wotd][!HideMeterGroup RAM]

[dDown]
Meter=String
MeterStyle=sText
MeasureName=mDown
StringAlign=Center
X=((#block#*2)+(#frameW#/2))
Text=DN %1
NumOfDecimals=1
AutoScale=1
MouseOverAction=[!ShowMeterGroup Down][!Redraw][!HideFade frame\Cover][!HideFade frame\Wotd]
MouseLeaveAction=[!ShowFade frame\Cover][!ShowFade frame\Wotd][!HideMeterGroup Down]

[dUp]
Meter=String
MeterStyle=sText
MeasureName=mUp
StringAlign=Center
X=(#block#+(#frameW#*0.75))
Text=UP %1
NumOfDecimals=1
AutoScale=1
MouseOverAction=[!ShowMeterGroup Up][!Redraw][!HideFade frame\Cover][!HideFade frame\Wotd]
MouseLeaveAction=[!ShowFade frame\Cover][!ShowFade frame\Wotd][!HideMeterGroup Up]

[dBat]
Meter=String
MeterStyle=sText
MeasureName=mBat
StringAlign=Right
X=(#frameW#+(#block#*2))
Text=BAT %1%
UpdateDivider=60
MouseOverAction=[!ShowMeterGroup Bat][!Redraw][!HideFade frame\Cover][!HideFade frame\Wotd]
MouseLeaveAction=[!ShowFade frame\Cover][!ShowFade frame\Wotd][!HideMeterGroup Bat]

[dHistBat]
Meter=Histogram
MeasureName=mBat
MeterStyle=sHist
Group=Bat

[dLineBat]
Meter=Image
MeterStyle=sLine
Group=Bat