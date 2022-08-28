- SQL Queries are of four types:

    - DDL – Data Definition Language
    - DQl – Data Query Language
    - DML – Data Manipulation Language
    - DCL – Data Control Language
    - TCL - Transaction Control Language

- SQL vs NoSQL
    - SQL databases can be scaled horizontally as well, though sharding or partitioning logic is often the user’s onus and not well supported.
    - NoSQL technologies are diverse and while many rely on the master-slave architecture, options for scaling vertically also exist.
 
- SQL vs PL/SQL
    - SQL is data oriented language. SQL is used to write queries, create and execute DDL and DML statments. 
    - PL/SQL is application oriented language. PL/SQL is used to write program blocks, functions, procedures, triggers and packages. 

- DBMS supports ACID property- Atomicity, Consistent, Isolated & Durability. 
    - Atomicity: All changes to the data will be made completely or not at all.
    - Consistent: Data must be consistent before and after transaction.
    - Isolated: No other process can effect the ongoing transactions
    - Durable: The changes must persist once made.

- Data warehousing is a centralised data management process where data from all resources comes to one place and all this data is used in decision- making in an organisation.

- An E-R model or entity relationship model refers to a diagrammatic approach to db design by taking account of a real- life entities and establishing relationship between them.
    - Entity is a real world object
    - Entity types are collection of entities with having same attributes.
    - Entity set is a collection of entuty types.

- Aggregation refers to a feature of E-R model which allows a dataset relation to participate in another set relation.

- TRUNCATE is like DELETE, only it removes all the data.

- In a **shared lock**, for reading and multiple transactions can access the resource while in **exclusive lock** is about performing a write operation.

- Normalisation is by dividing data in different tables, while denormalisation using for example, JOIN IN, does the opposite.

- Normalisation techniques are: **1NF** non repeating groups within a row, **2NF** where columns are dependent on whole primary key & **3NF** Solely dependent on primary key.

- An entity set is represented by a rectangle in a diagram.

- **SUPER KEY** -> **CANDIDATE KEY** -> **PRIMARY KEY**
    - Super key: Set of attributes that can uniquely identify a tuple.
    - Candidate key: Set of attributes used to define a specific table, one of which is also considered as primary key.
    - Primary key: It uniquely identifies a tuple, does not allow NULL as a value.
    - Unique key: primary key but with allowance of NULL value.
    - Alternate keys: All the keys from candidate keys which are not chosen to be primary key.
    - Foreign key: Keys which have only common value as in another table.
    - Composite key: Set of keys which can uniquely identify a tuple together are composite keys.

- **Query optimization** is finding a way to evaluate queries in least estimated cost when there are different algorithms in play.

- **Concurrency control** is to manage multiple transactions in a database so that the integrity can be controlled. Optimistic control- versioning and pessimistic approach would be locking.

- Functional dependency must  be a direct relation between two attributes like relation R1 where X->Y, Y is related to X. Whereas, transitiv erelationship is between more than two attributes, for example relation R1 where X->Z only when:
X->Y, Y->Z and Xis not ->Y.

- A **checkpoint** in databse would be when all the previous data logs are removed and stored on the storage disk. they can be used to recover the data logs upto the point of crash.

- Triggers are stored procedures that are not called by users, do not accept arguments and return values, are fired only due to certain events and cannot be scheduled.

- Stored procedures are pieces of code that can be reused, can be called by users, accept args and return values, allow transactions and can be scheduled.

- Indexes are data structures that improve the process of data retrieval. Clustered and Non - clustered.
    - Clustered alter the way a table handles data & is faster
    - Non-clustered do not alter a table but create seperate objects 

    (Fill factor is to set percentage of space left in a leaf level page)

- Intension is referred to table structure/ data schema. Cannot be altered
- Extension is number of tuples available at any instance and can be altered. As it is at a specific time it is known as snapshot of the table.

- **Data independence** means data is independent of of data retrieval algorithms or structure.



## SQL QUERIES

- UNION: Combines the result of two or more SELECT queries with distinct values 
- UNION ALL: Combines the result of two or more SELECT queries with duplicate values.

- CLAUSE to filter rows. WHERE & HAVING
    - WHERE is to mention a condition and used before a group by condition 
    - HAVE is used with GROUP BY 

- _ for single character matching and % for multiple character matching


- JOIN clause is to combine rows from two or more tables based on a common key- inner join, right join, left join & full join 

- A **view in sql** is a single table derived from other table.

- Query to retrive last day of next month 
    `SELECT LAST_DATE (ADD_MONTHS (SYS_DATE, 1) FROM DUAL`
    
- Get a letters position, case sensitive
    `SELECT INSTR(FIRST_NAME, binary'a') FROM Worker
- Removing left space and right space
    `LTRIM & RTRIM`
    ![image](https://user-images.githubusercontent.com/59767187/187092025-c25b5ef7-cdc6-4ae5-aa55-6c27c04b0b4b.png)
