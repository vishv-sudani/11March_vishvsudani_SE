create database Assignment2;
use Assignment2;
create table Employee (
Employee_id int primary key auto_increment,
First_Name varchar(30) not null,
Last_Name varchar(30) not null,
Salary int not null,
Joining_date datetime not null,
Department varchar(30));
INSERT INTO Employee (First_Name, Last_Name, Salary, Joining_date, Department)
VALUES ('Johnn', 'Abraham', 1000000, '2013-01-01 12:00:00', 'Banking'),
 ('Michael', 'Clarke', 800000, '2013-01-01 12:00:00', 'Insurance'),
('Roy', 'Thomas', 700000, '2013-02-01 12:00:00', 'Banking'),
('Tom', 'Jose', 600000, '2013-02-01 12:00:00', 'Insurance'),
('Jerry', 'Pinto', 650000, '2013-01-01 12:00:00', 'Insurance'),
('Philip', 'Mathew', 750000, '2013-01-01 12:00:00', 'Services'),
('TestName1', '123', 650000, '2013-01-01 12:00:00', 'Services'),
('TestName1', 'Lname%', 60000, '2013-02-01 12:00:00', 'Insurance');

SELECT a.First_Name, b.Incentive_amount
FROM Employee a
JOIN Incentive b ON a.Employee_id = a.Employee_ref_id
WHERE b.Incentive_amount > 3000