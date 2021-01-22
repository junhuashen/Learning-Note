 
/*
题目描述
查找入职员工时间排名倒数第三的员工所有信息，为了减轻入门难度，目前所有的数据里员工入职的日期都不是同一天
CREATE TABLE `employees` (
`emp_no` int(11) NOT NULL,
`birth_date` date NOT NULL,
`first_name` varchar(14) NOT NULL,
`last_name` varchar(16) NOT NULL,
`gender` char(1) NOT NULL,
`hire_date` date NOT NULL,
PRIMARY KEY (`emp_no`));
输入描述:
无
输出描述:
emp_no	birth_date	first_name	last_name	gender	hire_date

10005

1955-01-21

Kyoichi

Maliniak

M

1989-09-12
*/

SELECT * FROM employees ORDER BY hire_date DESC LIMIT 2,1
/*
当员工存在重复时,使用子查询

SELECT * FROM employees WHERE hire_date=(
SELECT DISTINCT hire_date FROM employees ORDER BY hire_date DESC LIMIT 2,1
)

考虑到入职日期可能会有多个重复，最合理的SQL语句应为:
SELECT * FROM employees 
WHERE hire_date = (
SELECT DISTINCT hire_date FROM employees 
ORDER BY hire_date DESC limit 2,1
);
*/