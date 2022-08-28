- SQL Queries are of four types:

    - DDL – Data Definition Language
    - DQl – Data Query Language
    - DML – Data Manipulation Language
    - DCL – Data Control Language

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

- **Concurrency control** is to manage multiple transactions in a database so that the integrity can be controlled.
