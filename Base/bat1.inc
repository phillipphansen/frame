[mBat]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent
UpdateDivider=30
OnUpdateAction=[!SetOption dLineBat Y ((#frameH#+(#block#*6)-1)-trunc(((#frameH#-1)/100)*[mBat]))]
ifCondition=mBat>=90
ifTrueAction=[!SetOption dBat FontColor 0,192,0,255][!SetOption dBat InlineSetting "Color | 0,192,0,192"][!UpdateMeter dBat][!Redraw]
ifCondition2=(mBat>25)&&(mBat<90)
ifTrueAction2=[!SetOption dBat FontColor #color1#][!UpdateMeter dBat][!SetOption dBat InlineSetting "Color | #color2#"][!UpdateMeter dBat][!Redraw]
ifCondition3=mBat<=25
ifTrueAction3=[!SetOption dBat FontColor 255,0,0,255][!UpdateMeter dBat][!SetOption dBat InlineSetting "Color | 255,0,0,192"][!Redraw]


[mAC]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine
ifCondition=mAC=1
ifTrueAction=[!SetOption dBat Text "↯ BAT %1%"][!UpdateMeter dBat][!Redraw]
ifCondition2=mAC=0
ifTrueAction2=[!SetOption dBat Text "BAT %1%"][!UpdateMeter dBat][!Redraw]


[dRAM]
Meter=String
MeterStyle=sText
MeasureName=mRAM
StringAlign=CenterCenter
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
StringAlign=CenterCenter
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
StringAlign=CenterCenter
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
StringAlign=RightCenter
X=(#frameW#-#block#)
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