[dRAM]
Meter=String
MeterStyle=sText
MeasureName=mRAM
StringAlign=CenterCenter
X=((#frameW#+(#block#*10))/3)
Text=RAM %1%
Percentual=1
UpdateDivider=20
MouseOverAction=[!ShowMeterGroup RAM][!Redraw][!HideFade frame\Wotd][!HideFade frame\Cover]
MouseLeaveAction=[!ShowFade frame\Cover][!ShowFade frame\Wotd][!HideMeterGroup RAM]

[dDown]
Meter=String
MeterStyle=sText
MeasureName=mDown
StringAlign=CenterCenter
X=(((#frameW#*2)+(#block#*2))/3)
Text=DN %1
NumOfDecimals=1
AutoScale=1
MouseOverAction=[!ShowMeterGroup Down][!Redraw][!HideFade frame\Wotd][!HideFade frame\Cover]
MouseLeaveAction=[!ShowFade frame\Cover][!ShowFade frame\Wotd][!HideMeterGroup Down]

[dUp]
Meter=String
MeterStyle=sText
MeasureName=mUp
StringAlign=RightCenter
X=(#frameW#-#block#)
Text=UP %1
NumOfDecimals=1
AutoScale=1
MouseOverAction=[!ShowMeterGroup Up][!Redraw][!HideFade frame\Wotd][!HideFade frame\Cover]
MouseLeaveAction=[!ShowFade frame\Cover][!ShowFade frame\Wotd][!HideMeterGroup Up]