function Update()
    return (string.gsub(SELF:GetOption("Name"), "^%l", string.upper))
end