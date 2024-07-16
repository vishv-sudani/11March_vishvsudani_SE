create database Assignment4;
use Assignment4;
create table salesdetails 
(salesman_id int primary key,
name varchar(30) not null,
city varchar(30) not null,
commission float not null);
INSERT INTO salesdetails (salesman_id, name, city, commission)
VALUES (5001,'James Hoog', ' New York', 0.15),
(5002,'Nail Knite', 'Paris', 0.13),
(5005,'Pit Alex', 'LONDON', 0.11),
(5006,'Mc Lyon', 'Paris', 0.14),
(5007,'Paul Adam', 'Rome', 0.13),
(5003,'Lauson Hen', 'San Jose', 0.12);
select * from salesdetails;