#include "crowMain.hpp"
//#define ASIO_STANDALONE 
//#include <asio.hpp>
#include <crow.h> 

// following this: https://crowcpp.org/0.3/getting_started/your_first_application/
void createPort() 
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello World!";
    });
    
    //contrary to the guide, port() seems to be required
    app.port(8080).run();
}