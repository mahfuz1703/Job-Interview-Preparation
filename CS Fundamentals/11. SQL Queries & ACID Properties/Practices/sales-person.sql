-- Problem : https://leetcode.com/problems/sales-person/description/

select SalesPerson.name
from SalesPerson
where SalesPerson.name not in (
    select SalesPerson.name
    from SalesPerson
        left join Orders on Orders.sales_id = SalesPerson.sales_id
        left join Company on Company.com_id = Orders.com_id
    where Company.name = 'RED'
)