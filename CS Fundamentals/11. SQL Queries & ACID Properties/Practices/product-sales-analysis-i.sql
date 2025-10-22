-- Problem - https://leetcode.com/problems/product-sales-analysis-i/description/


select Product.product_name, Sales.year, Sales.price
from Sales
left join Product
on Sales.product_id = Product.product_id