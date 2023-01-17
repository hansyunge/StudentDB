#ifndef _DATABASE_
#define _DATABASE_

#include <iostream>
#include <string>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
#include "StudentMenu.h"
#include <iomanip>

class Database 
{
private:

    sql::Driver* driver;
    sql::Connection* con;
    sql::Statement* stmt;
    sql::PreparedStatement* pstmt;
    sql::ResultSet* res;
    sql::ResultSetMetaData* res_meta;


public:

    Database();
    void dbMakeConnection();
    int dbPrintQuery(string* header);
    int newDatabase();
    void searchStudentID(std::string searchStudent, string *header);
    void searchStudentLastName(std::string searchStudent, string *header);





};

#endif // !_DATABASE_
