
#include "Database.h"
using namespace std;

//for demonstration only. never save your password in the code!

    const string server = "50.87.195.38";
    const string username = "thetrvq5_hans";
    const string password = "tempdatabasepassword1";


    Database::Database() {

        sql::Driver* driver;
        sql::Connection* con;
        sql::Statement* stmt;
        sql::PreparedStatement* pstmt;
    }

        void Database::dbMakeConnection() {

            try
            {
                driver = get_driver_instance();
                con = driver->connect(server, username, password);
                cout << endl << "connection successful" << endl;

            }
            catch (sql::SQLException e)
            {
                cout << "Could not connect to server. Error message: " << e.what() << endl;
                system("pause");
                exit(1);
            }

        }

        ///*
        int Database::dbPrintQuery(string *header) {

            try {

                string mysqlQuery = "SELECT * FROM students";
                con->setSchema("thetrvq5_studentDB");
                stmt = con->createStatement();
                res = stmt->executeQuery(mysqlQuery);
                res_meta = res->getMetaData();
                int columncount = res_meta->getColumnCount();

                // iterating over result to output each student in database
                int x = 1;
                while (res->next()) {
                    cout << endl << "Student " << x << ": " << endl << "*******************";

                    for (int i = 1; i < columncount + 1; i++) {
                        cout << endl << setw(15) << right << header[i-1] << res->getString(i);
                    }
                    cout << endl << "*********************" << endl;
                    system("pause");
                    x++;
                }

                cout << endl << endl << "Completed Query: " << mysqlQuery << endl;
                delete stmt;
                delete con;
                delete res;
            }
            catch (sql::SQLException e)
            {
                cout << "Error executing query. " << e.what() << endl;
                system("pause");
                exit(1);
            }
        }

        void Database::searchStudentID(string searchStudent, string *header) {

            Database newConnection;

            con->setSchema("thetrvq5_studentDB");
            stmt = con->createStatement();
            string mysqlQuery = "SELECT * FROM students where Student_ID='" + searchStudent + "'";
            res = stmt->executeQuery(mysqlQuery);
            res_meta = res->getMetaData();
            int columncount = res_meta->getColumnCount();

            int x = 1;
            while (res->next()) {
                cout << endl << "Student " << searchStudent << ": " << endl << "*******************";

                for (int i = 1; i < columncount + 1; i++) {
                    cout << endl << setw(15) << right << header[i - 1] << res->getString(i);
                }
                cout << endl << "*********************" << endl;
                system("pause");
                x++;


                }
         }
        void Database::searchStudentLastName(string searchStudent, string *header) {

            Database newConnection;

            con->setSchema("thetrvq5_studentDB");
            stmt = con->createStatement();
            string mysqlQuery = "SELECT * FROM students where LastName='" + searchStudent + "'";
            res = stmt->executeQuery(mysqlQuery);
            res_meta = res->getMetaData();
            int columncount = res_meta->getColumnCount();

            int x = 1;
            while (res->next()) {
                cout << endl << "Student " << searchStudent << ": " << endl << "*******************";

                for (int i = 1; i < columncount + 1; i++) {
                    cout << endl << setw(15) << right << header[i - 1] << res->getString(i);
                }
                cout << endl << "*********************" << endl;
                system("pause");
                x++;


            }
        }


        int Database::newDatabase()
        {
            sql::Driver* driver;
            sql::Connection* con;
            sql::Statement* stmt;
            sql::PreparedStatement* pstmt;

            try
            {
                driver = get_driver_instance();
                con = driver->connect(server, username, password);
                con->setSchema("thetrvq5_studentDB");
            }
            catch (sql::SQLException e)
            {
                cout << "Could not connect to server. Error message: " << e.what() << endl;
                system("pause");
                exit(1);
            }

            //please create database "" ahead of time
            con->setSchema("thetrvq5_studentDB");

            stmt = con->createStatement();
            stmt->execute("DROP TABLE IF EXISTS inventory");
            cout << "Finished dropping table (if existed)" << endl;
            stmt->execute("CREATE TABLE inventory (id serial PRIMARY KEY, name VARCHAR(50), quantity INTEGER);");
            cout << "Finished creating table" << endl;
            delete stmt;

            pstmt = con->prepareStatement("INSERT INTO inventory(name, quantity) VALUES(?,?)");
            pstmt->setString(1, "banana");
            pstmt->setInt(2, 150);
            pstmt->execute();
            cout << "One row inserted." << endl;

            pstmt->setString(1, "orange");
            pstmt->setInt(2, 154);
            pstmt->execute();
            cout << "One row inserted." << endl;

            pstmt->setString(1, "apple");
            pstmt->setInt(2, 100);
            pstmt->execute();
            cout << "One row inserted." << endl;

            delete pstmt;
            delete con;
            system("pause");
            return 0;
        }
    