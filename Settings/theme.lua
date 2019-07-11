function SetTheme(light)
    if light == 0 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'light', '1', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dThemeSet', 'Text', 'Light')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color1', '0,0,0,255', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color2', '0,0,0,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color3', '0,0,0,128', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color4', '255,255,255,178', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color5', '223,223,223,178', '#@#Variables.inc')
        SKIN:Bang('!RefreshGroup', 'frame')
    elseif light == 1 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'light', '0', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dThemeSet', 'Text', 'Dark')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color1', '255,255,255,255', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color2', '255,255,255,192', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color3', '255,255,255,128', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color4', '32,32,32,153', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'Variables', 'color5', '0,0,0,153', '#@#Variables.inc')
        SKIN:Bang('!RefreshGroup', 'frame')
    end
end

function SetStyle(classic)
    if classic == 0 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'classic', '1', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dStyleSet', 'Text', 'Classic')
        SKIN:Bang('!DeactivateConfig', 'frame\\Blur')
        SKIN:Bang('!RefreshGroup', 'frame')

    elseif classic == 1 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'classic', '0', '#@#Variables.inc')
        SKIN:Bang('!WriteKeyValue', 'dStyleSet', 'Text', 'Blur')
        SKIN:Bang('!ActivateConfig', 'frame\\Blur')
        SKIN:Bang('!RefreshGroup', 'frame')
    end
end