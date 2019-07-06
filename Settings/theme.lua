function SetTheme(light)
    if light == 0 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'light', '1', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'theme', 'Light', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color1', '0,0,0,255', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color2', '0,0,0,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color3', '0,0,0,128', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color4', '255,255,255,178', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color5', '214,214,214,178', '#@#Variables.inc')
        SKIN:Bang('!RefreshGroup', 'frame')
    elseif light == 1 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'light', '0', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'theme', 'Dark', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color1', '255,255,255,255', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color2', '255,255,255,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color3', '255,255,255,128', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color4', '41,41,41,153', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color5', '0,0,0,153', '#@#Variables.inc')
        SKIN:Bang('!RefreshGroup', 'frame')
    end
end