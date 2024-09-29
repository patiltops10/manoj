create database assessment;

use assesment;

-- tables -> City,  Customer,  Country

create table country (
    country_id int primary key,
    country_name varchar(30),
    country_name_eng varchar(30),
    country_code varchar(10));

create table city (
    city_id int primary key,
    city_name varchar(20) ,
    latitude float,
    longtitude float,
    country_id int,
    foreign key (country_id) references country(country_id));

create table customer (
    customer_id int primary key,
    customer_name varchar(20),
    city_id int,
    customer_address varchar(20),
    next_call_date date,
    ts_inserted timestamp,
    foreign key (city_id) references city(city_id));


insert into city values
	(1, "berlin",      52.520008, 13.404954,   1),
	(2, "belgrade",    44.787197, 20.457273,   2),
	(3, "zagreb",      45.815399, 15.966568,   3),
	(4, "new york",    40.730610, -73.935242,  4),
	(5, "los angelos", 34.052235, -118.243683, 4),
	(6, "warsaw",      52.237049, 21.017532,   5);   

insert into customer values
	(1, "jewellery store", 4, "long street 120",     "2020-01-21", "2020-01-09 14:01:20"),
	(2, "bakery",          1, "kurfurstendamm 25",   "2020-02-21", "2020-01-09 17:52:15"),
	(3, "cafe",            1, "tauentzienstrabe 44", "2020-01-21", "2020-01-10 08:02:49"),
	(4, "restaurant",      3, "ulica lipa 15",       "2020-01-21", "2020-01-10 09:20:21");

insert into country values
	(1, "deutschland", "germany", "DEU"),
	(2, "srbija",      "serbia",  "SRB"),
	(3, "hrvatska",    "croatia", "HRV"),
	(4, "United states of america", "United states of america", "USA"),
	(5, "polska",      "poland",  "POL"),
	(6, "espana",      "spain",   "ESP"),
	(7, "rossiya",     "russia",  "RUS");

select * from customer;

select * from city;

select * from country;

-- 1
SELECT 
    c.country_name AS Country,
    ci.city_name AS City,
    cu.customer_name AS Customer
FROM 
    country c
LEFT JOIN 
    city ci ON c.country_id = ci.country_id
LEFT JOIN 
    customer cu ON ci.city_id = cu.city_id
ORDER BY 
    c.country_name, ci.city_name, cu.customer_name;


-- 2
SELECT 
    c.country_name AS Country,
    ci.city_name AS City,
    cu.customer_name AS Customer
FROM 
    country c
INNER JOIN 
    city ci ON c.country_id = ci.country_id
LEFT JOIN 
    customer cu ON ci.city_id = cu.city_id
ORDER BY 
    c.country_name, ci.city_name, cu.customer_name;



    
    
    
    
    
    
    
