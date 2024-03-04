#create table
create table Employee
(
	Employee_id int(20) primary key,
    First_name varchar(30),
    Last_name varchar(30),
    Salary int(20),
    Joining_date timestamp(6),
    Department varchar(30)
);

#insert data in Employee table
insert into Employee (Employee_id, First_name, Last_name, Salary, Department) values
	(1, 'John', 'Abraham', 1000000, 'Banking'),
    (2, 'Michael', 'Clarke', 800000, 'Insurance'),
    (3, 'Roy', 'Thomas', 700000, 'Banking'),
    (4, 'Tom', 'Jose', 600000, 'Insurance'),
    (5, 'Jerry', 'Pinto', 650000, 'Insurance'),
    (6, 'Philip', 'Mathew', 750000, 'Services'),
    (7, 'TestName1', '123', 650000, 'Services'),
    (8, 'TestName2', 'Lname%', 600000, 'Insurance');

#create table
create table Incentive
(
	Employee_ref_id int(20),
    Incentive_date varchar(30),
    Incentive_amount int(20)
);

#add foreign key in Incentive table in Employee_ref_id column
alter table Incentive add foreign key (Employee_ref_id) references Employee (Employee_id);

#insert data
insert into Incentive values
(1, '01-FEB-13', 5000),
(2, '01-FEB-13', 3000),
(3, '01-FEB-13', 4000),
(1, '01-JAN-13', 4500),
(2, '01-JAN-13', 3500);

#show all data or row in Incentive table
select * from Incentive;

#display only first name and last name in employee table in employee id is 4
select First_name, Last_name from Employee where Employee_id = 4;

#display first name, joining date and salary in employee table
select First_name, Joining_date, Salary from Employee;

#display employee table first name in assending
select * from Employee order by First_name ASC;

#display employee table salary in descending
select * from Employee order by Salary DESC;

#display employee table first name start with J
select * from Employee where First_name like 'J%';

select Employee.First_name, Incentive.Incentive_amount 
from Employee inner join Incentive 
on Employee.Employee_id = Incentive.Employee_ref_id 
where Incentive_amount > 3000;

#create table
create table viewTable
(
	id int(10),
    Message varchar(30),
    ViewTime timestamp(4)
);

#create trigger
DELIMITER $$
create trigger after_employee_insert 
after insert on Employee for each row 
begin 
insert into viewTable set viewTable.id = new.id, viewTable.Message = "Value Inserted"; 
end $$