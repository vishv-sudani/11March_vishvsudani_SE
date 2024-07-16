create database Assignment5;
use Assignment5;
create table item_mast 
(PRO_ID int primary key auto_increment,
PRO_NAME varchar(50) not null,
PRO_PRICE float not null,
PRO_COM int not null);
alter table `item_mast` auto_increment = 101;
INSERT INTO item_mast (PRO_NAME, PRO_PRICE, PRO_COM)
VALUES ('Mother Board', 3200.00, 15),
('Key Board', 450.00, 16),
('ZIP drive', 250.00, 14),
('Speaker', 550.00, 16),
('Monitor', 5000.00, 11),
('DVD drive', 900.00, 12),
('CD drive', 800.00, 12),
('Printer', 2600.00, 13),
('Refill cartridge', 350.00, 13),
('Mouse', 250.00, 12);

select PRO_NAME, PRO_PRICE from item_mast where PRO_PRICE > 200 and PRO_PRICE < 600;