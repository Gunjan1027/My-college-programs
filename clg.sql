create database if not exists Apna_college ;
use Apna_college ;

create table if not exists student (
	roll_no int primary key,
    Name varchar(50),
    marks int not null,
    grade varchar(1),
    city varchar(20)
);

INSERT INTO student
VALUES
(101, "anil", 78, "C", "Pune"),
(102, "bhumika", 93, "A", "Mumbai"), 
(103, "chetan", 85, "B", "Mumbai"),
(104, "dhruv", 96, "A", "Delhi"),
(105, "emanuel", 12, "F", "Delhi"),
(106, "farah", 82, "B", "Delhi");

select * FROM student ;