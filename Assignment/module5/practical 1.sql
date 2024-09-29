create database assignment;
show databases;
use assignment;
show tables;
create table student(rollno int primary key,name varchar(20) not null,branch varchar(20));
show tables;
describe student;
insert into student (rollno,name,branch) values(1 ,"jay", "computer_science"),(2,"suhani","electronic and com"),(3, "kriti" ,"electronic and com");
show tables;
describe student;
select * from student;
create table Exam(rollno int,s_code varchar(20)not null,marks int, p_code varchar(20)not null ,foreign key (rollno) references student(rollno));
insert into Exam (rollno,s_code,marks,p_code) values(1 ,"CS11", 50,"CS"),(1,"CS12",60,"CS"),(2, "EC101" ,60,"EC"),(2,"EC102",70,"EC"),(3,"EC101",45,"EC"),(3,"EC102",50,"EC");
show tables;
describe Exam;
select * from Exam;
SHOW DATABASES;
USE ASSIGNMENT;
SHOW TABLES;
CREATE TABLE EMPLOYEE(EMPLOYEE_ID INT PRIMARY KEY,
FIRST_NAME VARCHAR(20) NOT NULL,
LAST_NAME VARCHAR(20),
SALARY INT,
JOINING_DATE DATETIME,
DEPARTMENT VARCHAR(20));
SHOW TABLES;
DESCRIBE EMPLOYEE;
SELECT * FROM EMPLOYEE;
INSERT INTO EMPLOYEE(EMPLOYEE_ID,FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) 
VALUES(1,"JOHN","ABRAHAM",1000000,"2013/01/01 12:00:00","BANKING"),
(2,"MICHAEL","CLARKE",800000,"2013/01/01 12:00:00","INSURANCE"),
(3,"ROY","THOMAS",700000,"2013/02/01 12:00:00","BANKING"),
(4,"TOM","JOSE",600000,"2013/02/01 12:00:00","INSURANCE"),
(5,"JERRT","PINTO",650000,"2013/02/01 12:00:00","INSURANCE"),
(6,"PHILIP","MATHEW",750000,"2013/01/01 12:00:00","SERVICES"),
(7,"TESTNAME1","123",650000,"2013/01/01 12:00:00","SERVICES"),
(8,"TESTNAME2","LNAME%",600000,"2013/02/01 12:00:00","INSURANCE");
SHOW TABLES;
DESCRIBE EMPLOYEE;
CREATE TABLE INCENTIVE(EMPLOYEE_REF_ID INT,INCENTIVE_DATE DATETIME,INCENTIVE_AMOUNT INT , foreign key(employee_ref_id) references employee(employee_id));
drop table incentive;
SHOW TABLES;
DESCRIBE INCENTIVE;
SELECT * FROM INCENTIVE;
INSERT INTO INCENTIVE(EMPLOYEE_REF_ID,INCENTIVE_DATE,INCENTIVE_AMOUNT) 
VALUES(1,"2013/02/01",500incentive0),(2,"2013/02/01",3000),(3,"2013/02/01",4000),(1,"2013/01/01",4500),(2,"2013,01/01",3500);
SHOW TABLES;
DESCRIBE INCENTIVE;
update incentive set employee_ref_id=1 where incentive_amount=4500;

-- 3. Get First_Name from employee table using Tom name “Employee Name”.

SELECT FIRST_NAME 
FROM EMPLOYEE 
WHERE FIRST_NAME = 'TOM';

-- 4. Get FIRST_NAME, Joining Date, and Salary from employee table.
select first_name,joining_date,salary
from employee;

-- 5. Get all employee details from the employee table order by First_Name Ascending and Salary descending?
select * from employee details order by first_name asc,salary desc;

-- 6.Get employee details from employee table whose first name contains ‘J’.
select * from emp_details where name like 'j%';

-- 7.Get department wise maximum salary from employee table order by  asendig

select max(salary), department from employee group by department having max(salary) > 100000 order by max(salary);

-- 9. Select first_name, incentive amount from employee and incentives table
-- forthose employees who have incentives and incentive amount greater than 3000

select * from employee details;
 
select first_name, incentive_amount from employee right join incentive on employee.employee_id = incentive.EMPLOYEE_REF_ID where incentive_amount > 3000;

DELIMITER //

CREATE TRIGGER after_employee_insert
AFTER INSERT ON EMPLOYEE
FOR EACH ROW
BEGIN
    INSERT INTO viewtable (
        EMPLOYEE_ID,
        FIRST_NAME,
        LAST_NAME,
        SALARY,
        JOINING_DATE,
        DEPARTMENT
    )
    VALUES (
        NEW.EMPLOYEE_ID,
        NEW.FIRST_NAME,
        NEW.LAST_NAME,
        NEW.SALARY,
        NEW.JOINING_DATE,
        NEW.DEPARTMENT
    );
END;

//

DELIMITER ;
use assignment;

create table salesperson(sno int primary key,sname varchar(20),city varchar(20),commission float);

insert into salesperson(sno, sname, city, commission)
values(1001,'peel','london',0.12),
      (1002,'serres','san_jose',0.13),
      (1004,'motika','london',0.11),
      (1007,'rafkin','barcelona',0.15),
      (1003,'axelrod','new_york',0.1);
      
create table customer(
cnm int primary key,
cname varchar(20),
city varchar(20),
rating int not null,
sno int, 
foreign key(sno) references salesperson(sno));

insert into customer(cnm, cname, city, rating, sno) values
	(201, "hoffman", "london", 100, 1001),
	(202, "giovanne", "rome", 200, 1003),
	(203, "liu", "san jose", 300, 1002),
	(204, "grass", "barcelona", 100, 1002),
	(206, "clemens", "london", 300, 1007),
	(207, "pereira", "rome", 100, 1004);
    
     select * from customer;
     
-- 13 retrive the below data from above table

-- 14.Names and cities of all salespeople in London with commission.above 0.1215.All salespeople either in Barcelona or in London.

select sname, city from salesperson where city = 'london' and commission > 0.1215 ;

-- 15 All salespeople either in Barcelona or in London

select * from salesperson where city = 'london' or city = 'barcelona';

-- 16.All salespeople with commission between 0.10 and 0.12.

select * from salesperson where commission > 0.10 and commission < 0.12;

--  17.All customers excluding those with rating <= 100 unless they are located
-- inRome

select * from customer where rating <=100 and city = 'rome';

-- 18. Write a SQL statement that displays all the information about all
-- salespeople 

select * from salesperson;

create table sales_people(salesman_id int primary key, name varchar(20),city varchar(20), commission float);

insert into sales_people(salesman_id, name,city, commission) values
(5001,'james hoog','new york',0.15),
(5002,'nail knite','paris',0.13),
(5005,'pit alex','london',0.11),
(5006,'mc lyon','paris',0.14),
(5007,'paul','adam rome',0.13),
(5003,'lauson hen','san jose',0.12);

select * from sales_people;

-- 19 from the following table,write a sql query to find orders that are delivered by a
-- sales person with id .5001. return ord_no,ord_date,purch_amt
create table orders (
	order_no int primary key,
	purchase_amt float not null,
	order_date date,
	customer_id int not null,
	sid int,
	foreign key (sid) references sales_people(salesman_id));

INSERT INTO orders VALUES 
    (70001, 150.5,   '2012-10-05', 3005, 5002),
    (70009, 270.65, '2012-09-05', 3001, 5005),
    (70002, 65.26,   '2012-10-05', 3002, 5001),
    (70004, 110.5,   '2012-08-05', 3009, 5003),
    (70007, 948.5,   '2012-09-05', 3005, 5002),
    (70005, 2400.6, '2012-07-05', 3007, 5001),
    (70008, 5760   , '2012-09-05', 3002, 5001),
    (70010, 1983.43, '2012-10-05', 3004, 5006),
    (70003, 2480.4, '2012-10-05', 3009, 5003),
    (70012, 250.45, '2012-06-05', 3008, 5002),
    (70011, 75.29,   '2012-08-05', 3003, 5007),
    (70013, 3045.6, '2012-04-05', 3002, 5001);
    
show tables;
describe table orders;
select * from orders;
SELECT
    o.order_no AS ord_no,
    o.order_date AS ord_date,
    o.purchase_amt AS purch_amt
FROM
    orders o
WHERE
    o.sid = 5001;

-- 20 from the following table,write a sql query to select a range of products whose price 
-- is in the range rs 200 to rs 600 .begin and end values are included. return pro
create table product (
	pro_id int primary key,
	pro_name varchar(20) not null,
	pro_price int,
	pro_com int);
    
insert into product values
    (101, 'mother board', 3200, 15),
    (102, 'key board', 450, 16),
    (103, 'zip drive', 250, 14),
    (104, 'speaker', 550, 16),
    (105, 'monitor', 5000, 11),
    (106, 'dvd drive', 900, 12),
    (107, 'cd drive', 800, 12),
    (108, 'printer', 2600, 13),
    (109, 'refill cartridge', 350, 13),
    (110, 'mouse', 250, 12);
    
     select pro_id, pro_name, pro_price, pro_com as commision from product where pro_price between 200 and 600;
     
     -- 21. From the following table, write a SQL query to calculate the average price for a manufacturer code of 16. Return avg. 
-- no manufacturer code avaialable ?????
 
SELECT AVG(pro_price) FROM product WHERE pro_com = 16;



-- 22. From the following table, write a SQL query to display the pro_name as 'Item Name' and pro_priceas 'Price in Rs.' 
 
select pro_name as Item_Name, pro_price as Price_in_rs from product;
 
-- 23. From the following table, write a SQL query to find the items whose prices are higher than or equal to $250. Order the result by product price in 
--     descending, then product name in ascending. Return pro_name and pro_price.

SELECT pro_name, pro_price FROM product WHERE pro_price >= 250 ORDER BY pro_price DESC, pro_name ASC;

-- select pro_name, pro_price from product where pro_price >= 250 order by pro_price desc;

-- select pro_name, pro_price from product where pro_price >= 250 order by pro_name asc;


-- 24. From the following table, write a SQL query to calculate average price of the items for each company. Return average price and companycode. 

-- there is no data available about company.
    
SELECT pro_com AS Manufacturer_Code, AVG(pro_price) AS Avg_Price FROM product GROUP BY pro_com;

    
  






      








