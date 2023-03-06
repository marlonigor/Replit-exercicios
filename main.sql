/*The task is to write a SQL query to concatenate firstname and lastname columns into one column named 'fullname', 
and calculate the total annual salary for each employee, 
including bonuses, 
and display it in a column named 'total', 
sorted in ascending order by the 'total' column.
*/


SELECT CONCAT(firstname,' ', lastname) AS fullname, salary*12+(500*experience) AS total
FROM staff
ORDER BY total;
