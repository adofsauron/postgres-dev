CREATE SCHEMA TESTLIBPQ2;
SET search_path = TESTLIBPQ2;
CREATE TABLE TBL1 (i int4);
CREATE TABLE TBL2 (i int4);
CREATE RULE r1 AS ON INSERT TO TBL1 DO
  (INSERT INTO TBL2 VALUES (new.i); NOTIFY TBL2);
