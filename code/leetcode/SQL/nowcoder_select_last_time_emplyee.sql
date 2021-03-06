 
/*
2020-01-20 13:55:58

时间限制：C/C++ 1秒，其他语言2秒 空间限制：C/C++ 32M，其他语言64M 热度指数：377462
 算法知识视频讲解
题目描述
查找最晚入职员工的所有信息，为了减轻入门难度，目前所有的数据里员工入职的日期都不是同一天(sqlite里面的注释为--,mysql为comment)
CREATE TABLE `employees` (
`emp_no` int(11) NOT NULL,  -- '员工编号'
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

10008

1958-02-19

Saniya

Kalloufi

M

1994-09-15
示例1
输入
复制
无
输出
复制
无

原题链接:
https://www.nowcoder.com/practice/218ae58dfdcd4af195fff264e062138f?tpId=82&&tqId=29753&rp=1&ru=/activity/oj&qru=/ta/sql/question-ranking

*/

select * from employees order by hire_date desc limit 1;

/*
优质解析:

*/
/*
select * from employees 
    order by hire_date desc 
    limit 1;
*/

/* 使用limit 与 offset关键字  */
/*
select * from employees 
    order by hire_date desc 
    limit 1 offset 0;
*/

/* 使用limit关键字 从第0条记录 向后读取一个，也就是第一条记录 */
/*
select * from employees 
    order by hire_date desc 
    limit 0,1;
*/

/* 使用子查询，最后一天的时间有多个员工信息 */
/*
select * from employees
    where hire_date = (select max(hire_date) from employees);
*/

/*
题目：查找最晚入职员工的所有信息：
假定：所有的数据里员工入职的日期都不是同一天

方法1：子查询(最佳)
select * from employees
where hire_date =
(select max(hire_date) from employees);
或
select * from employees
where hire_date in
(select max(hire_date) from employees);
补充：
date类型的数据越大，表示时间越接近现在，即越晚
Where语句使用=和in都可以得出结果，因为子查询语句返回一个元组用=或in都可

方法2：使用limit或者offset关键字
select * from employees
order by hire_date desc limit 1;
或
select * from employees
order by hire_date desc limit 0,1;
或
select * from employees
order by hire_date desc limit 1 offset 0; # 执行速度最快
补充：
limit n：表示从第0条数据开始，读取n条数据，是limt(0, n)的缩写
limit m,n：表示从第m条数据开始，读取n条数据
limit n offset m：表示从第m条数据开始，读取n条数据

总结：
方法1适用于存在多个员工入职同时达到最晚一天的情况。泛用性更好。
*/