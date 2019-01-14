[mBuild]
Measure=Plugin
Plugin=WebParser.dll
URL=[mWX]
StringIndex=4
Group=wxMeasures
RegExpSubstitute=1
Substitute="^12:(.*) PM":"12:\1","^1:(.*) PM":"13:\1","^2:(.*) PM":"14:\1","^3:(.*) PM":"15:\1","^4:(.*) PM":"16:\1","^5:(.*) PM":"17:\1","^6:(.*) PM":"18:\1","^7:(.*) PM":"19:\1","^8:(.*) PM":"20:\1","^9:(.*) PM":"21:\1","^10:(.*) PM":"22:\1","^11:(.*) PM":"23:\1","^12:(.*) AM":"0:\1"," AM":""

[mSunRise]
Measure=Plugin
Plugin=WebParser.dll
URL=[mWX]
StringIndex=5
Group=wxMeasures
RegExpSubstitute=1
Substitute="^12:(.*) PM":"12:\1","^1:(.*) PM":"13:\1","^2:(.*) PM":"14:\1","^3:(.*) PM":"15:\1","^4:(.*) PM":"16:\1","^5:(.*) PM":"17:\1","^6:(.*) PM":"18:\1","^7:(.*) PM":"19:\1","^8:(.*) PM":"20:\1","^9:(.*) PM":"21:\1","^10:(.*) PM":"22:\1","^11:(.*) PM":"23:\1","^12:(.*) AM":"0:\1"," AM":""

[mSunSet]
Measure=Plugin
Plugin=WebParser.dll
URL=[mWX]
StringIndex=6
Group=wxMeasures
RegExpSubstitute=1
Substitute="^12:(.*) PM":"12:\1","^1:(.*) PM":"13:\1","^2:(.*) PM":"14:\1","^3:(.*) PM":"15:\1","^4:(.*) PM":"16:\1","^5:(.*) PM":"17:\1","^6:(.*) PM":"18:\1","^7:(.*) PM":"19:\1","^8:(.*) PM":"20:\1","^9:(.*) PM":"21:\1","^10:(.*) PM":"22:\1","^11:(.*) PM":"23:\1","^12:(.*) AM":"0:\1"," AM":""