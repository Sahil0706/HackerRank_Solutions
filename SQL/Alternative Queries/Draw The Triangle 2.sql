DECLARE @i INT = 0
WHILE (@i < 20) 
BEGIN
    SET @i = @i + 1
    SELECT REPLICATE('* ', @i) 
END
