function setUnits()
    units = SKIN:GetVariable("wxUnits")
    if units == "metric" then
        SKIN:Bang("!WriteKeyValue", "Variables", "wxUnits", "imperial", "#@#Variables.inc")
    else
        SKIN:Bang("!WriteKeyValue", "Variables", "wxUnits", "metric", "#@#Variables.inc")
    end
    SKIN:Bang("!Refresh", "frame\\Weather")
    SKIN:Bang("!Refresh")
end