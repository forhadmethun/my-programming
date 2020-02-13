select Name as Employee from Employee E
where E.Salary > (select Salary from Employee where E.ManagerId = Id);