[@CurrentObservationTime]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentParent]
StringIndex=2
RegExpSubstitute=1
Substitute="^12:(.*) pm":"12:\1","^1:(.*) pm":"13:\1","^2:(.*) pm":"14:\1","^3:(.*) pm":"15:\1","^4:(.*) pm":"16:\1","^5:(.*) pm":"17:\1","^6:(.*) pm":"18:\1","^7:(.*) pm":"19:\1","^8:(.*) pm":"20:\1","^9:(.*) pm":"21:\1","^10:(.*) pm":"22:\1","^11:(.*) pm":"23:\1","^12:(.*) am":"0:\1"," am":""

[@CurrentSunrise]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=2
RegExpSubstitute=1
Substitute="^12:(.*) pm":"12:\1","^1:(.*) pm":"13:\1","^2:(.*) pm":"14:\1","^3:(.*) pm":"15:\1","^4:(.*) pm":"16:\1","^5:(.*) pm":"17:\1","^6:(.*) pm":"18:\1","^7:(.*) pm":"19:\1","^8:(.*) pm":"20:\1","^9:(.*) pm":"21:\1","^10:(.*) pm":"22:\1","^11:(.*) pm":"23:\1","^12:(.*) am":"0:\1"," am":""

[@CurrentSunset]
Measure=WebParser
Group=Weather | WeatherCurrent
Url=[@CurrentSunParent]
StringIndex=4
RegExpSubstitute=1
Substitute="^12:(.*) pm":"12:\1","^1:(.*) pm":"13:\1","^2:(.*) pm":"14:\1","^3:(.*) pm":"15:\1","^4:(.*) pm":"16:\1","^5:(.*) pm":"17:\1","^6:(.*) pm":"18:\1","^7:(.*) pm":"19:\1","^8:(.*) pm":"20:\1","^9:(.*) pm":"21:\1","^10:(.*) pm":"22:\1","^11:(.*) pm":"23:\1","^12:(.*) am":"0:\1"," am":""
