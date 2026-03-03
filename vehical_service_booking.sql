use project ;
CREATE TABLE Customers (
    cust_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50),
    phone VARCHAR(15),
    email VARCHAR(50)
);

CREATE TABLE Vehicles (
    veh_id INT PRIMARY KEY AUTO_INCREMENT,
    cust_id INT,
    model VARCHAR(50),
    number_plate VARCHAR(15),
    FOREIGN KEY (cust_id) REFERENCES Customers(cust_id)
);

CREATE TABLE Services (
    serv_id INT PRIMARY KEY AUTO_INCREMENT,
    type VARCHAR(50),
    cost DECIMAL(10,2)
);

CREATE TABLE Bookings (
    book_id INT PRIMARY KEY AUTO_INCREMENT,
    cust_id INT,
    veh_id INT,
    serv_id INT,
    date DATE,
    status VARCHAR(20),
    FOREIGN KEY (cust_id) REFERENCES Customers(cust_id),
    FOREIGN KEY (veh_id) REFERENCES Vehicles(veh_id),
    FOREIGN KEY (serv_id) REFERENCES Services(serv_id)
);

INSERT INTO Customers (name, phone, email)
VALUES 
('Ravi Patel', '9876543210', 'ravi@gmail.com'),
('Priya Shah', '9823456789', 'priya@gmail.com');

INSERT INTO Vehicles (cust_id, model, number_plate)
VALUES 
(1, 'Honda City', 'GJ01AB1234'),
(2, 'Hyundai i20', 'MH12CD5678');

INSERT INTO Services (type, cost)
VALUES 
('Oil Change', 800),
('Car Wash', 400),
('Full Service', 1500);

INSERT INTO Bookings (cust_id, veh_id, serv_id, date, status)
VALUES 
(1, 1, 1, '2025-11-03', 'Completed'),
(2, 2, 3, '2025-11-04', 'Pending');

-- Show all bookings with full details:

SELECT b.book_id, c.name AS Customer, v.model AS Vehicle, s.type AS Service, s.cost, b.date, b.status
FROM Bookings b
JOIN Customers c ON b.cust_id = c.cust_id
JOIN Vehicles v ON b.veh_id = v.veh_id
JOIN Services s ON b.serv_id = s.serv_id;

-- Find total amount spent by each customer:

SELECT c.name, SUM(s.cost) AS Total_Spent
FROM Bookings b
JOIN Customers c ON b.cust_id = c.cust_id
JOIN Services s ON b.serv_id = s.serv_id
WHERE b.status = 'Completed'
GROUP BY c.name;

-- Show all pending bookings:

SELECT * FROM Bookings WHERE status = 'Pending';

-- List vehicles and their owners:

SELECT v.model, v.number_plate, c.name 
FROM Vehicles v
JOIN Customers c ON v.cust_id = c.cust_id;




