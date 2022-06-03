function Initialize()
   getScreenWidth = SKIN:GetMeasure('cScreenWidth')
   screenWidth = getScreenWidth:GetNumberOption('Formula')
   getScreenHeight = SKIN:GetMeasure('cScreenHeight')
   screenHeight = getScreenHeight:GetNumberOption('Formula')

   screenDimensions = screenWidth .. 'x' .. screenHeight
   oldDimensions = SKIN:GetVariable('res')

   SKIN:Bang('!SetOption', 'dResScale', 'Text', 'Auto-scaled to ' .. screenDimensions)

   if screenDimensions ~= oldDimensions then

      if screenWidth >= screenHeight then
         resScale = screenWidth / 480
         frameWidth = screenWidth / 2
      else
         resScale = screenHeight / 480
         frameWidth = screenHeight / 2
      end

      block = resScale * 2
      frameHeight = round(resScale * 135)

      getScreenX = SKIN:GetMeasure('cScreenX')
      screenX = getScreenX:GetNumberOption('Formula')
      getScreenY = SKIN:GetMeasure('cScreenY')
      screenY = getScreenY:GetNumberOption('Formula')

      frameX = round(screenX + (screenWidth / 4))
      frameY = round(screenY + ((screenHeight - frameHeight) / 2))

      baseX = frameX
      baseY = round(frameY - (6 * block))
      
      SKIN:Bang('!WriteKeyValue', 'Variables', 'block', block, '#@#Variables.inc')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'frameW', frameWidth, '#@#Variables.inc')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'frameH', frameHeight, '#@#Variables.inc')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'frameX', frameX, '#@#Variables.inc')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'frameY', frameY, '#@#Variables.inc')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'baseX', baseX, '#@#Variables.inc')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'baseY', baseY, '#@#Variables.inc')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'res', screenDimensions, '#@#Variables.inc')
      SKIN:Bang('!RefreshGroup', 'frame')
   end
end

function round(a)
   return math.floor(a + 0.5)
end
