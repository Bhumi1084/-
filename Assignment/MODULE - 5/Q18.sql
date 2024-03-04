#create table
create table salespeople
(
	salesman_id int(10),
    name varchar(30),
    city varchar(30),
    commission float(10)
);

#insert data
insert into salespeople values
(5001, 'James Hoog', 'New York', 0.15),
(5002, 'Nail Knite', 'Paris', 0.13),
(5005, 'Pit Alex', 'London', 0.11),
(5006, 'MC Lyon', 'Paris', 0.14),
(5007, 'Paul Adam', 'Rome', 0.13),
(5003, 'Lauson Hen', 'San Jose', 0.12);

#displays all the information about all salespeople
select * from salespeople;