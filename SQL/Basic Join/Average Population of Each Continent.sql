SELECT o.CONTINENT, FLOOR(AVG(c.POPULATION))
FROM CITY c
JOIN COUNTRY AS o ON c.COUNTRYCODE=o.CODE
GROUP BY o.CONTINENT;
