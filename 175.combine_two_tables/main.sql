SELECT firstName,
       LastName,
       city,
       state
FROM Person
         LEFT OUTER JOIN
     Address
     ON Person.personId = Address.personId;