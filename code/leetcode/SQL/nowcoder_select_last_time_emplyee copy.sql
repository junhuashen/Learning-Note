 
/*
2020-01-22 13:55:58

题目描述
查找所有已经分配部门的员工的last_name和first_name以及dept_no(请注意输出描述里各个列的前后顺序)
CREATE TABLE `dept_emp` (
`emp_no` int(11) NOT NULL,
`dept_no` char(4) NOT NULL,
`from_date` date NOT NULL,
`to_date` date NOT NULL,
PRIMARY KEY (`emp_no`,`dept_no`));
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
last_name	first_name	dept_no

Facello

Georgi

d001

省略

省略

省略

Piveteau

Duangkaew

d006
原题链接:
https://www.nowcoder.com/practice/6d35b1cd593545ab985a68cd86f28671?tpId=82&&tqId=29756&rp=1&ru=/activity/oj&qru=/ta/sql/question-ranking
*/

SELECT  employees.last_name, employees.first_name,dept_emp.dept_no FROM dept_emp ,employees WHERE dept_emp.emp_no=employees.emp_no 

/*
优质解析:
答案是按employees表中顺序输出的，所以使用内连接查询时，必须将employees表放在前面。
select last_name,first_name,dept_no from employees,dept_emp where dept_emp.emp_no = employees.emp_no;

使用左连接查询时，employees中没有分配部门的员工（没有被记录在dept_emp表）dept_no字段被自动取NULL然后被输出，所以应当剔除（复合条件连接查询）。
select last_name,first_name,dept_no
from employees left join dept_emp
on employees.emp_no = dept_emp.emp_no
where dept_emp.dept_no<>'';
*/
