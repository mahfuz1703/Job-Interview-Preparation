-- Problem - https://leetcode.com/problems/customers-who-never-order/description/

select Customers.name as Customers
from Customers
left join Orders
on Customers.id = Orders.customerId
where Orders.customerId is null