$(document).ready(function(){
    $("#SF").click(function(){
        
        $.get("/checkWinner", {"team": "SF"}, function(response){
            alert(response);
        });

    });
    $("#KC").click(function(){
        
        $.get("/checkWinner", {"team": "KC"}, function(response){
            alert(response);
        });
    });

});