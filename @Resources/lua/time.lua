function Update()
    rawUnix = SELF:GetNumberOption("Name")
    type = SELF:GetOption("Type")

    if type == "Day" then
        return day(rawUnix)
    elseif type == "Date" then
        return date(rawUnix)
    elseif type == "Time" then
        return time(rawUnix) 
    end
end

function day(unixTime)
    return os.date("%A", unixTime)
end

function date(unixTime)
    return os.date("%B %d", unixTime):gsub(" 0"," ")
end

function time(unixTime)
    twelveHour = SKIN:GetVariable("12hr")
    if twelveHour == "0" then
        return os.date("%H:%M", unixTime):gsub("^0","")
    elseif twelveHour == "1" then
        twelveHourTime = os.date("%I:%M %p", unixTime):gsub("^0","")
        return string.lower(twelveHourTime)
    end
end