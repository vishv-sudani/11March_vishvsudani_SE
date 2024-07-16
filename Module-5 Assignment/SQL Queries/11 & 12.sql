create database Assignment3;
use Assignment3;
create table Salesperson (
SNo int primary key,
SNAME varchar(30) not null,
CITY varchar(30) not null,
COMM float not null);
INSERT INTO Salesperson (SNo, SNAME, CITY, COMM)
VALUES (1001,'Peel', 'LONDON', .12),
(1002,'Serres', 'SAN JOSE', .13),
(1004,'Motika', 'LONDON', .11),
(1007,'Rafkin', 'BARCELONA', .15),
(1003,'Axelrod', 'NEW YORK', .1);
select * from Salesperson;

create table CUSTOMER 
(COMM int primary key auto_increment,
CNAME varchar(30) NOT NULL,
CITY varchar(30) NOT NULL,
RATING INT,
SNo int ,
foreign key (SNo) references Salesperson (SNo));
insert into CUSTOMER (COMM,CNAME,CITY,RATING,SNo)
values (201, 'Hoffman','London',100 , 1001),
(202,'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'san jose', 300, 1002),
(204,'grass', 'Barselona' , 100, 1002),
(206,'Clemens', 'London', 300, 1007),
(207,'Pereira', 'Roe', 100, 1004);
select * from CUSTOMER;
