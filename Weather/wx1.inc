[@CurrentObservationTime]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=2

[@CurrentSunrise]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=2

[@CurrentSunset]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=4
