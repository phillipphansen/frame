[Variables]

MainCapture=(?siU)

DateTime=(?siU).*"dt":(\d+),.*"dt":(\d+),.*"dt":(\d+),.*"dt":(\d+),.*"dt":(\d+),.*"dt":(\d+),.*"dt":(\d+),.*"dt":(\d+),.*"dt":(\d+),

CurrentConditions=(?siU).*"temp":(.*)\..*"feels_like":(\d+)\..*"humidity":(\d+),.*"visibility":(\d+),.*"wind_speed":(\d+)\..*"wind_deg":(\d+),.*"description":"(.*)".*"icon":"(.{3})"

TodayConditions=(?siU).*"daily".*"sunrise":(\d+),.*"sunset":(\d+),.*"min":(\d+)\..*"max":(\d+)\..*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),

ForcastConditions=(?siU).*"daily".*"dt".*"dt".*"min":(\d+)(?=\.|,).*"max":(\d+)(?=\.|,).*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),.*"dt".*"min":(\d+)(?=\.|,).*"max":(\d+)(?=\.|,).*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),.*"dt".*"min":(\d+)(?=\.|,).*"max":(\d+)(?=\.|,).*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),.*"dt".*"min":(\d+)(?=\.|,).*"max":(\d+)(?=\.|,).*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),.*"dt".*"min":(\d+)(?=\.|,).*"max":(\d+)(?=\.|,).*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),.*"dt".*"min":(\d+)(?=\.|,).*"max":(\d+)(?=\.|,).*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),.*"dt".*"min":(\d+)(?=\.|,).*"max":(\d+)(?=\.|,).*"description":"(.*)".*"icon":"(.{3})".*"pop":(.*),