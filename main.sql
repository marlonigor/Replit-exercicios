SELECT CONCAT(firstname,' ', lastname) AS fullname, salary*12+(500*experience) AS total
FROM staff
ORDER BY total;