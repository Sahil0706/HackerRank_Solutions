SELECT CONCAT(Name,'(',LEFT(Occupation,1),')')
FROM Occupations
ORDER BY Name
GO
SELECT CONCAT('There are a total of ', Count(Occupation),' ', LOWER(Occupation),'s.')
FROM Occupations
GROUP BY Occupation
ORDER BY Count(Occupation) ASC, Occupation ASC
GO
