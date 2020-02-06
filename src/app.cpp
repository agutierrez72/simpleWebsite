#include <server.h>
#include <lib.h>
using namespace ucm;

int main(int argc, char** argv){

    Server server(argc, argv);

    server.renderHTML("/", "index.html");

    

    server.route("/checkWinner", [&](const request& req, response& res){
        if(req.has_params({"team"})){
            if(req.has_params({"team"})){
                std::string team = req.url_params.get("team");

                bool correct = checkWinner(team);

                if(correct)
                    res.sendHTML("Correct");
                else
                    res.sendHTML("Incorrect");
            } 
        }
        else
            res.sendError400();
    });

    server.run();


}
