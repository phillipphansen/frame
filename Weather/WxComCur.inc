[@CurrentAll]
Measure=WebParser
;UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:101.0) Gecko/20100101 Firefox/101.0
Url=#wxURL#
RegExp=(?siU)^(.*)$
FinishAction=[!UpdateMeasureGroup wxMeasures][!UpdateMeterGroup wxMeters][!Update]
UpdateDivider=-1


;- Time and Date ----------------------------------

[@TimeParent]
Measure=WebParser
Url=[@CurrentAll]
RegExp=#DateTime#

[@CurObsTime]
Measure=WebParser
Url=[@TimeParent]
StringIndex=1

[@TodayTime]
Measure=WebParser
Url=[@TimeParent]
StringIndex=2

[@FDay1Time]
Measure=WebParser
Url=[@TimeParent]
StringIndex=3

[@FDay2Time]
Measure=WebParser
Url=[@TimeParent]
StringIndex=4

[@FDay3Time]
Measure=WebParser
Url=[@TimeParent]
StringIndex=5

[@FDay4Time]
Measure=WebParser
Url=[@TimeParent]
StringIndex=6

[@FDay5Time]
Measure=WebParser
Url=[@TimeParent]
StringIndex=7

[@FDay6Time]
Measure=WebParser
Url=[@TimeParent]
StringIndex=8

[@FDay7Time]
Measure=WebParser
Url=[@TimeParent]
StringIndex=9

;- Current Conditions -----------------------------

[@CurCondParent]
Measure=WebParser
Url=[@CurrentAll]
RegExp=#CurrentConditions#

[@CurTemp]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=1

[@CurFeelsLike]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=2

[@CurHumidity]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=3

[@CurVis]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=4

[@CurWindSpd]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=5

[@CurWindDir]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=6

[@CurCond]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=7

[@CurIcon]
Measure=WebParser
Url=[@CurCondParent]
StringIndex=8

;- Today Conditions -------------------------------

[@TodayCondParent]
Measure=WebParser
Url=[@CurrentAll]
RegExp=#TodayConditions#

[@TodaySunrise]
Measure=WebParser
Url=[@TodayCondParent]
StringIndex=1

[@TodaySunset]
Measure=WebParser
Url=[@TodayCondParent]
StringIndex=2

[@TodayLow]
Measure=WebParser
Url=[@TodayCondParent]
StringIndex=3

[@TodayHigh]
Measure=WebParser
Url=[@TodayCondParent]
StringIndex=4

[@TodayCond]
Measure=WebParser
Url=[@TodayCondParent]
StringIndex=5

[@TodayIcon]
Measure=WebParser
Url=[@TodayCondParent]
StringIndex=6

[@TodayPrecip]
Measure=WebParser
Url=[@TodayCondParent]
StringIndex=7

;- Forecast Conditions ----------------------------

[@ForecastParent]
Measure=WebParser
Url=[@CurrentAll]
RegExp=#ForcastConditions#

;- Day 1 ---

[@FDay1Low]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=1

[@FDay1High]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=2

[@FDay1Cond]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=3

[@FDay1Icon]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=4

[@FDay1Precip]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=5

;- Day 2 ---

[@FDay2Low]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=6

[@FDay2High]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=7

[@FDay2Cond]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=8

[@FDay2Icon]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=9

[@FDay2Precip]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=10

;- Day 3 ---

[@FDay3Low]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=11

[@FDay3High]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=12

[@FDay3Cond]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=13

[@FDay3Icon]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=14

[@FDay3Precip]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=15

;- Day 4 ---

[@FDay4Low]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=16

[@FDay4High]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=17

[@FDay4Cond]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=18

[@FDay4Icon]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=19

[@FDay4Precip]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=20

;- Day 5 ---

[@FDay5Low]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=21

[@FDay5High]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=22

[@FDay5Cond]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=23

[@FDay5Icon]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=24

[@FDay5Precip]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=25

;- Day 6 ---

[@FDay6Low]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=26

[@FDay6High]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=27

[@FDay6Cond]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=28

[@FDay6Icon]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=29

[@FDay6Precip]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=30

;- Day 7 ---

[@FDay7Low]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=31

[@FDay7High]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=32

[@FDay7Cond]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=33

[@FDay7Icon]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=34

[@FDay7Precip]
Measure=WebParser
Url=[@ForecastParent]
StringIndex=35