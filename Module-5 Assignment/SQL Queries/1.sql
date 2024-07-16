create database Assignment;
use Assignment;
create table student (Rollno int primary key auto_increment,
Name varchar (30) not null,
Branch varchar (30) not null); 
insert into student (Name, Branch) 
values ('Jay', 'Computer Science'),
('Suhani', 'Electric and Com'),
('Kriti', 'Electric and Com');
select * from student;

create table exam 
(Rollno int,
foreign key (Rollno) references student (Rollno),
S_code text not null,
Marks int not null,
P_code text null);
insert into exam (Rollno, S_code, Marks, P_code)
values(1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'CS101',45,'EC'),
(3,'CS102',50,'EC');
select * from exam


