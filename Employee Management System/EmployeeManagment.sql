
CREATE DATABASE EmployeeManagement;
USE EmployeeManagement;
CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY IDENTITY(1,1), 
    Name VARCHAR(100) NOT NULL,
    Email VARCHAR(100) NOT NULL UNIQUE,
    Phone VARCHAR(20) NOT NULL,
    Department VARCHAR(50) NOT NULL
);
CREATE TABLE Projects (
    ProjectID INT PRIMARY KEY IDENTITY(1,1), 
    ProjectName VARCHAR(100) NOT NULL,
    StartDate DATE NOT NULL,
    EndDate DATE,
    Budget DECIMAL(10, 2)
);
CREATE TABLE EmployeeProjects (
    EmployeeID INT,
    ProjectID INT,
    PRIMARY KEY (EmployeeID, ProjectID),
    FOREIGN KEY (EmployeeID) REFERENCES Employees(EmployeeID),
    FOREIGN KEY (ProjectID) REFERENCES Projects(ProjectID)
);

-- SELECT * FROM Employees;

-- DELETE FROM Employees
-- WHERE EmployeeID = 4; -- Deletes the employee with EmployeeID = 1
