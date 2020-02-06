$(document).ready(function(){
    $("#SF").click(function(){
        var team = "SF";
        $.get("/checkWinner", {"team": team}, function(response){
            alert(response);
        });

    })
    $("KC").click(function(){
        var team = "KC";
        $.get("/checkWinner", {"team": team}, function(response){
            alert(response);
        });
    })

});