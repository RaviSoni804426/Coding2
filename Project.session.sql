show tables;
--   Question-1
WITH recent_date AS (
    SELECT MAX(d_date) AS most_recent_date
    FROM date_dim
)

SELECT
    item.i_category,
    SUM(store_sales.ss_sales_price) AS total_revenue
FROM
    store_sales
JOIN
    date_dim ON store_sales.ss_sold_date_sk = date_dim.d_date_sk
JOIN
    item ON store_sales.ss_item_sk = item.i_item_sk
JOIN
    recent_date ON date_dim.d_date <= recent_date.most_recent_date
WHERE
    date_dim.d_date <= recent_date.most_recent_date
GROUP BY
    item.i_category
ORDER BY
    total_revenue DESC;
   
--    Question-2
-- Replace 'YYYY-MM-DD' with the actual date 6 months ago from today
WITH SalesLast6Months AS (
    SELECT
        sales_date,
        sales_amount
    FROM
        store_sales
    WHERE
        sales_date >= DATEADD(MONTH, -6, CURRENT_DATE)
)

SELECT
    DATE_TRUNC('month', sales_date) AS month,
    SUM(sales_amount) AS total_sales
FROM
    SalesLast6Months
GROUP BY
    month
ORDER BY
    month;


    -- Question-3
    select * from  
