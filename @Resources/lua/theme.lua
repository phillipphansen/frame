function SetTheme(dark)
    if dark == 0 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'dark', '1', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dThemeSet', 'Text', 'Dark')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color1', '255,255,255,255', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color2', '255,255,255,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color3', '255,255,255,128', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color4', '32,32,32,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color5', '0,0,0,178', '#@#Variables.inc')
    elseif dark == 1 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'dark', '0', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dThemeSet', 'Text', 'Light')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color1', '0,0,0,255', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color2', '0,0,0,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color3', '0,0,0,128', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color4', '255,255,255,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color5', '223,223,223,178', '#@#Variables.inc')
    end
    SKIN:Bang('!RefreshGroup', 'frame')
end

function SetStyle(clear)
    if clear == 0 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'clear', '1', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'blur', 'None', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dStyleSet', 'Text', 'Clear')
    elseif clear == 1 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'clear', '0', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'blur', 'Acrylic', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dStyleSet', 'Text', 'Background')
    end
    SKIN:Bang('!RefreshGroup', 'frame')
end