#create table
create table Student
(
 	Rollno int(10) primary key,
    Name varchar(30),
    Branch varchar(30)
);

#insert data
insert into Student values
(1, 'Jay', 'Computer Science'),
(2, 'Suhani', 'Electronic and Com'),
(3, 'Kriti', 'Electronic and Com');

#create table
create table Exam
(
	Rollno int(10),
    S_code varchar(30),
    Marks int(20),
    P_code varchar(20)
);

#update table and add foreign key in Exam table in Rollno column
alter table Exam add foreign key(Rollno) references student (Rollno);

#insert data in Exam table
insert into Exam values
(1, 'CS11', 50, 'CS'),
(1, 'CS12', 60, 'CS'),
(2, 'EC101', 66, 'EC'),
(2, 'EC102', 70, 'Ec'),
(3, 'EC101', 45, 'EC'),
(3, 'EC102', 50, 'EC');