-- ACID Properties in SQL
-- This script demonstrates the ACID properties: Atomicity, Consistency, Isolation, Durability


-- Atomicity: All operations within a transaction are completed successfully or none are applied.
BEGIN TRANSACTION;
    INSERT INTO Accounts (AccountID, Balance) VALUES (1, 1000);
    INSERT INTO Accounts (AccountID, Balance) VALUES (2, 2000);
COMMIT TRANSACTION;
-- If any of the above inserts fail, none will be applied.



-- Consistency: The database remains in a valid state before and after the transaction.
-- Assuming there is a constraint that Balance must be non-negative.
BEGIN TRANSACTION;
    UPDATE Accounts SET Balance = Balance - 500 WHERE AccountID = 1;
    UPDATE Accounts SET Balance = Balance + 500 WHERE AccountID = 2;
COMMIT TRANSACTION;
-- The total balance remains the same, maintaining consistency.



-- Isolation: Transactions are isolated from each other until they are completed.
-- Transaction 1
BEGIN TRANSACTION;
    UPDATE Accounts SET Balance = Balance + 100 WHERE AccountID = 1;
-- Transaction 2
BEGIN TRANSACTION;
    UPDATE Accounts SET Balance = Balance - 50 WHERE AccountID = 1;
COMMIT TRANSACTION; -- Transaction 2 completes first
COMMIT TRANSACTION; -- Transaction 1 completes after
-- The final balance reflects the isolated operations.



-- Durability: Once a transaction is committed, it will remain so, even in the event of a system failure.
BEGIN TRANSACTION;
    INSERT INTO Accounts (AccountID, Balance) VALUES (3, 3000);
COMMIT TRANSACTION;
-- Even if the system crashes now, the new account will persist in the database.
-- Note: Actual durability is managed by the database system's logging and recovery mechanisms.