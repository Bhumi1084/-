#create table
create table Salesperson
(
	SNo int(10) primary key,
    SNAME varchar(30),
    CITY varchar(30),
    COMM varchar(30)
);
alter table Salesperson modify COMM float(10);

#insert data
insert into Salesperson values
(1001, 'Peel', 'London', .12),
(1002, 'Serres', 'San Jose', .13),
(1004, 'Motika', 'London', .11),
(1007, 'Rafkin', 'Barcelona', .15),
(1003, 'Axelrod', 'New York', .1);

#create table
create table Customer
(
	CNM int(10) primary key,
    CNAME varchar(30),
    CITY varchar(30),
    RATING varchar(30),
    SNO int(10)
);

#update table and add foreign key
alter table Customer add foreign key (SNO) references Salesperson (SNo);

#insert data
insert into Customer values
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'San Jose', 300, 1002),
(204, 'Grass', 'Barcelona', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Pereira', 'Roe', 100, 1004);

#display Names and cities of allsalespeople in London with commission above 0.12
select SNAME, CITY from Salesperson where CITY = 'London' AND COMM > 0.12;

#All salespeople either in Barcelona or in London
select SNAME, CITY from Salesperson where CITY = 'Barcelona' OR CITY = 'London';

#All salespeople with commission between 0.10 and 0.12. 
select SNAME, COMM from Salesperson where Comm > 0.10 AND Comm < 0.12;

#All customers excluding those with rating <= 100 unless they are located inRome
select * from Customer where RATING <= 100;