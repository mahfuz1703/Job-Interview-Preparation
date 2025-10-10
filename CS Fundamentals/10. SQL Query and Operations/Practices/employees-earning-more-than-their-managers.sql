-- Problem - https://leetcode.com/problems/employees-earning-more-than-their-managers/description/

select A.name as Employee
from Employee as A, Employee as B
where A.managerId = B.id and A.salary > B.salary