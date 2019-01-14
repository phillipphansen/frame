[mTime]
Measure=Time
Format=%#I:%M %p

[dTime]
Meter=String
MeasureName=mTime
MeterStyle=sText
StringAlign=Center
FontSize=(#block#*4)
X=((#block#*2)+(#frameW#/2))
Y=-#block#
Text=%1
InlineSetting2=Size | (#block#*2)
InlinePattern2=:\d* (\D*)