function Update()
    rawVis = SELF:GetNumberOption("Name")
    units = SKIN:GetVariable("wxUnits")
    if units == "imperial" then
        impVis = tostring(round(rawVis / 1609, 1))
        return impVis .. " mi visibility"
    else
        metricVis = tostring(round(rawVis / 1000, 1))
        return metricVis .. " km visibility"
    end
end

function round(num, places)
    multiplier = 10^(places)
    return math.floor(num * multiplier + 0.5) / multiplier
 end