document.getElementById("btn").addEventListener("click",function(){
   const randomColor="#"+Math.floor(Math.random()*16777216).toString(16);
   console.log(randomColor);
    document.body.style.backgroundColor = randomColor;
});