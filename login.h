#ifndef LOGIN_H
#define LOGIN_H

#include "entity.h"

class login{
private:
        user u;
        bool matched;
public:
        login();
        void logindetail(QString a, QString b);
        void getdata();
        bool loginstatus();
        ~login();
        //temp
        //void settext();
};

#endif // LOGIN_H
