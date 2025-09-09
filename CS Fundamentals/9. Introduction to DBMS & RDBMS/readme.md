# 📚 Database Concepts (DBMS, RDBMS, SQL, NoSQL, Keys, Joins)

This document explains the basics of DBMS, RDBMS, SQL, NoSQL, Entities, Keys, and Joins with **what, why, how, benefits, and real-life examples** in a simple way.

---

## 📌 1. DBMS & RDBMS  

### **DBMS (Database Management System)**
- **What**: A software system that allows you to store, manage, and retrieve data.  
- **Why**: Without DBMS, you’d need to manage files manually, which is slow and messy.  
- **How**: Provides an interface to insert, update, delete, and query data.  
- **Example**: A **library system** storing book details in files.  

👉 **Real-life example**: Think of a **notebook** where you write all names, phone numbers, and addresses. You can search but it takes time. That’s like a basic DBMS.

---

### **RDBMS (Relational Database Management System)**
- **What**: A type of DBMS where data is stored in **tables** (rows & columns) and related using **keys**.  
- **Why**: Makes data **structured, consistent, and easier to query**.  
- **How**: Uses SQL to define relations between tables.  
- **Example**: MySQL, PostgreSQL, Oracle.  

👉 **Real-life example**: In a **school system**, you have:  
- **Students Table** (StudentID, Name, Class)  
- **Courses Table** (CourseID, CourseName)  
- **Enrollments Table** (StudentID, CourseID → links both).  

This relation between tables = **RDBMS power**.

---

## 📌 2. Client - Server - Database  

- **Client**: The user or application requesting data (e.g., mobile app, web browser).  
- **Server**: Processes the request, runs queries, and sends back results.  
- **Database**: Where actual data is stored.  

👉 **Real-life example**:  
- You (client) order food using Foodpanda.  
- Foodpanda app server connects to the database to check restaurants, menu, and order status.  
- Database stores all **restaurants, orders, customers** info.  

---

## 📌 3. SQL vs NoSQL  

### **SQL (Structured Query Language)**
- **What**: Language for managing relational (table-based) databases.  
- **Use Case**: When data is **structured** (like banking, HR, e-commerce).  
- **Faster Case**: SQL is faster when dealing with **complex joins & structured data**.  
- **Example**: Banking system where customer → account → transactions are strictly related.  

---

### **NoSQL (Not Only SQL)**
- **What**: Non-relational database (document, key-value, graph, column).  
- **Use Case**: When data is **unstructured, scalable, and flexible** (like social media posts, IoT).  
- **Faster Case**: NoSQL is faster when dealing with **large unstructured data** and **real-time applications**.  
- **Example**: Facebook posts, YouTube comments, chat messages.  

👉 **Real-life analogy**:  
- **SQL** = Like a structured **Excel sheet** with fixed rows & columns.  
- **NoSQL** = Like a **diary** where each page (document) can have different info (flexible).

---

## 📌 4. Entity, Attributes, Keys, Rows, Columns  

- **Entity**: Real-world object → stored as a table.  
  - Example: **Student**  
- **Attributes**: Properties of entity → stored as columns.  
  - Example: StudentID, Name, Email.  
- **Rows (Tuples)**: Single record of entity.  
  - Example: Row = (101, "Arian", "arian@email.com").  
- **Columns (Fields)**: Vertical set of attributes.  

👉 **Real-life example**:  
Think of a **class attendance sheet**.  
- **Sheet** = Table  
- **Student** = Entity  
- **Name, Roll, Present/Absent** = Attributes  
- Each **row** = one student’s record.  

---

## 📌 5. Primary Key & Foreign Key  

- **Primary Key (PK)**  
  - Unique identifier for each row in a table.  
  - Example: **StudentID** in Students table.  

- **Foreign Key (FK)**  
  - Links two tables. A field in one table that refers to PK in another.  
  - Example: **CourseEnrollments.StudentID → Students.StudentID**.  

👉 **Real-life analogy**:  
- **PK** = Your **National ID Number** (unique).  
- **FK** = Your **Bank Account** references your National ID to link ownership.  

---

## 📌 6. SQL JOINS  

Joins are used to combine data from multiple tables.  

### **Tables Example**  

**Students**  
| StudentID | Name   |  
|-----------|--------|  
| 1         | Arian  |  
| 2         | Mahfuz |  
| 3         | Rafi   |  

**Courses**  
| CourseID | StudentID | CourseName |  
|----------|-----------|------------|  
| 101      | 1         | DBMS       |  
| 102      | 2         | OOP        |  
| 103      | 4         | AI         |  

---

### 🔹 **Inner Join** (Common in both)  
```sql
SELECT Students.Name, Courses.CourseName
FROM Students
INNER JOIN Courses ON Students.StudentID = Courses.StudentID;
```
**Output**  
| Name    | CourseName |  
|---------|------------|  
| Ariyan  | DBMS       |  
| Mahfuz  | OOP        |

### 🔹 **Left Join** (All from left + matching right)  
```sql
SELECT Students.Name, Courses.CourseName
FROM Students
LEFT JOIN Courses ON Students.StudentID = Courses.StudentID;
```
**Output**  
| Name    | CourseName |  
|---------|------------|  
| Ariyan  | DBMS       |  
| Mahfuz  | OOP        |
| Rafi    | NULL       |

### 🔹 **Right Join** (All from right + matching left)  
```sql
SELECT Students.Name, Courses.CourseName
FROM Students
RIGHT JOIN Courses ON Students.StudentID = Courses.StudentID;
```
**Output**  
| Name    | CourseName |  
|---------|------------|  
| Ariyan  | DBMS       |  
| Mahfuz  | OOP        |
| NULL    | AI         |

### 🔹 **Full Join** (All records, matched or not)  
```sql
SELECT Students.Name, Courses.CourseName
FROM Students
FULL OUTER JOIN Courses ON Students.StudentID = Courses.StudentID;
```
**Output**  
| Name    | CourseName |  
|---------|------------|  
| Ariyan  | DBMS       |  
| Mahfuz  | OOP        |
| Rafi    | NULL       |
| NULL    | AI         |


## 📌 7. Summary
- **DBMS → Data management, avoids redundancy.**
- **RDBMS → Relations between data, consistency.**
- **SQL → Best for structured, complex queries.**
- **NoSQL → Best for big, unstructured, real-time data.**
- **NoSQL → Best for big, unstructured, real-time data.**
- **Joins → Combine multiple tables for powerful queries.**