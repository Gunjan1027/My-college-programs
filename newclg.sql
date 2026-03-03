create database if not exists company ;
use company ;

CREATE TABLE if not exists employees (
  employee_id int(11) NOT NULL,
  firstname varchar(255) NOT NULL,
  lastname varchar(255) NOT NULL,
  email varchar(255) NOT NULL,
  phone varchar(50) NOT NULL,
  hiredate date NOT NULL,
  manager_id int(11) DEFAULT NULL,
  jobtitle varchar(255) NOT NULL
);



INSERT INTO employees (employee_id,firstname, lastname, email, phone, hiredate, manager_id, jobtitle) VALUES
(1, 'Tommy', 'Bailey', 'tommy.bailey@example.com', '515.123.4567', '2016-06-17', NULL, 'President'),
(2, 'Jude', 'Rivera', 'jude.rivera@example.com', '515.123.4568', '2016-09-21', 1, 'Administration Vice President'),
(3, 'Blake', 'Cooper', 'blake.cooper@example.com', '515.123.4569', '2016-01-13', 1, 'Administration Vice President'),
(4, 'Louie', 'Richardson', 'louie.richardson@example.com', '590.423.4567', '2016-01-03', 3, 'Programmer'),
(5, 'Nathan', 'Cox', 'nathan.cox@example.com', '590.423.4568', '2016-05-21', 4, 'Programmer'),
(6, 'Gabriel', 'Howard', 'gabriel.howard@example.com', '590.423.4569', '2016-06-25', 4, 'Programmer'),
(7, 'Charles', 'Ward', 'charles.ward@example.com', '590.423.4560', '2016-02-05', 4, 'Programmer'),
(8, 'Bobby', 'Torres', 'bobby.torres@example.com', '590.423.5567', '2016-02-07', 4, 'Programmer'),
(9, 'Mohammad', 'Peterson', 'mohammad.peterson@example.com', '515.124.4569', '2016-08-17', 2, 'Finance Manager'),
(10, 'Ryan', 'Gray', 'ryan.gray@example.com', '515.124.4169', '2016-08-16', 9, 'Accountant'),
(11, 'Tyler', 'Ramirez', 'tyler.ramirez@example.com', '515.124.4269', '2016-09-28', 9, 'Accountant'),
(12, 'Elliott', 'James', 'elliott.james@example.com', '515.124.4369', '2016-09-30', 9, 'Accountant'),
(13, 'Albert', 'Watson', 'albert.watson@example.com', '515.124.4469', '2016-03-07', 9, 'Accountant'),
(14, 'Elliot', 'Brooks', 'elliot.brooks@example.com', '515.124.4567', '2016-12-07', 9, 'Accountant'),
(15, 'Rory', 'Kelly', 'rory.kelly@example.com', '515.127.4561', '2016-12-07', 1, 'Purchasing Manager'),
(16, 'Alex', 'Sanders', 'alex.sanders@example.com', '515.127.4562', '2016-05-18', 15, 'Purchasing Clerk'),
(17, 'Frederick', 'Price', 'frederick.price@example.com', '515.127.4563', '2016-12-24', 15, 'Purchasing Clerk'),
(18, 'Ollie', 'Bennett', 'ollie.bennett@example.com', '515.127.4564', '2016-07-24', 15, 'Purchasing Clerk'),
(19, 'Louis', 'Wood', 'louis.wood@example.com', '515.127.4565', '2016-11-15', 15, 'Purchasing Clerk'),
(20, 'Dexter', 'Barnes', 'dexter.barnes@example.com', '515.127.4566', '2016-08-10', 15, 'Purchasing Clerk'),
(46, 'Ava', 'Sullivan', 'ava.sullivan@example.com', '011.44.1344.429268', '2016-10-01', 1, 'Sales Manager'),
(47, 'Ella', 'Wallace', 'ella.wallace@example.com', '011.44.1344.467268', '2016-01-05', 1, 'Sales Manager'),
(48, 'Jessica', 'Woods', 'jessica.woods@example.com', '011.44.1344.429278', '2016-03-10', 1, 'Sales Manager'),
(49, 'Isabella', 'Cole', 'isabella.cole@example.com', '011.44.1344.619268', '2016-10-15', 1, 'Sales Manager'),
(50, 'Mia', 'West', 'mia.west@example.com', '011.44.1344.429018', '2016-01-29', 1, 'Sales Manager'),
(56, 'Evie', 'Harrison', 'evie.harrison@example.com', '011.44.1344.486508', '2016-11-23', 46, 'Sales Representative'),
(57, 'Scarlett', 'Gibson', 'scarlett.gibson@example.com', '011.44.1345.429268', '2016-01-30', 47, 'Sales Representative'),
(58, 'Ruby', 'Mcdonald', 'ruby.mcdonald@example.com', '011.44.1345.929268', '2016-03-04', 47, 'Sales Representative'),
(101, 'Annabelle', 'Dunn', 'annabelle.dunn@example.com', '515.123.4444', '2016-09-17', 2, 'Administration Assistant'),
(102, 'Emma', 'Perkins', 'emma.perkins@example.com', '515.123.5555', '2016-02-17', 1, 'Marketing Manager'),
(103, 'Amelie', 'Hudson', 'amelie.hudson@example.com', '603.123.6666', '2016-08-17', 102, 'Marketing Representative'),
(104, 'Harper', 'Spencer', 'harper.spencer@example.com', '515.123.7777', '2016-06-07', 2, 'Human Resources Representative'),
(105, 'Gracie', 'Gardner', 'gracie.gardner@example.com', '515.123.8888', '2016-06-07', 2, 'Public Relations Representative'),
(106, 'Rose', 'Stephens', 'rose.stephens@example.com', '515.123.8080', '2016-06-07', 2, 'Accounting Manager'),
(107, 'Summer', 'Payne', 'summer.payne@example.com', '515.123.8181', '2016-06-07', 106, 'Public Accountant');

select * from employees ;

