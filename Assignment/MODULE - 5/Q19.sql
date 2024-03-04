#create table
create table orders
(
	ord_no int(10) primary key,
    purch_amt float(10),
    ord_date datetime(6),
    customer_id int(10),
    salesman_id int(10)
);
#change column data type in ord_date from orders table
alter table orders modify ord_date varchar(30);

#insert data
insert into orders values
(70001, 150.5, 2012-10-05, 3005, 5002),
(70009, 270.65, 2012-09-10, 3001, 5005),
(70002, 65.26, 2012-10-05, 3002, 5001),
(70004, 110.5, 2012-08-17, 3009, 5003),
(70007, 948.5, 2012-09-10, 3005, 5002),
(70005, 2400.6, 2012-07-27, 3007, 5001),
(70008, 5760, 2012-09-10, 3002, 5001),
(70010, 1983.43, 2012-10-10, 3004, 5006),
(70003, 2480.4, 2012-10-10, 3009, 5003),
(70012, 250.45, 2012-06-27, 3008, 5002),
(70011, 75.29, 2012-08-17, 3003, 5007),
(70013, 3045.6, 2012-04-25, 3002, 5001);

#display orders that are delivered by a salesperson with ID. 5001. Return ord_no, ord_date, purch_amt.
select ord_no, ord_date, purch_amt from orders where salesman_id = 5001;