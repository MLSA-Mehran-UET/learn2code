<<<<<<< HEAD
function myAnimation(){
    let id = null;
    const box = document.getElementById("animationBox");
    let pos = 0;
    clearInterval(id);
    id = setInterval(frame, 5);
    
    function frame(){
        if(pos == 350){
            clearInterval(id);
        }
        else{
            pos++;
            box.style.top = pos + "px";
            box.style.left = pos + "px";
        }
    }
=======
function myAnimation(){
    let id = null;
    const box = document.getElementById("animationBox");
    let pos = 0;
    clearInterval(id);
    id = setInterval(frame, 5);
    
    function frame(){
        if(pos == 350){
            clearInterval(id);
        }
        else{
            pos++;
            box.style.top = pos + "px";
            box.style.left = pos + "px";
        }
    }
>>>>>>> b87e6665d167e831a72ed8e150a2a3767ac3ac10
}