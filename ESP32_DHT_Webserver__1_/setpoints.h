
#ifndef SETPOINTS_H
#define SETPOINTS_H



const char* setpoints = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.3/css/all.min.css">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css">
    <title>Document</title>
    <style>
      @import url('https://fonts.googleapis.com/css2?family=Roboto:ital,wght@0,100;0,300;0,400;0,500;1,100;1,300;1,400&display=swap');
*{
 margin:0;
 padding:0;
}
body{
 font-family:'Roboto',sans-serif;
  overflow-x:hidden;
  background-image: url(https://t3.ftcdn.net/jpg/07/92/09/80/240_F_792098013_HlNsSZcLwN0NwF5vES8V3LNMJzTn1hxL.jpg);
  background-repeat: no-repeat;
  background-size: cover;
}
/*******************************************************************************************************************
                                               Navigation bar
*******************************************************************************************************************/
nav{
display:flex;
background-color: white;
justify-content: space-around;
padding:20px 0;
color: black;

align-items: center;
}

.logo .logo1 {
width: 80px;
height: 80px;
}

nav.logo{
letter-spacing: 3px;
}
nav ul{
display:flex;
list-style: none;
width:40%;
justify-content: space-between;
}
nav ul li a {
  color: black;
  text-decoration: none;
  font-size: 1em;
}

nav ul li a:hover {
    color: green;
    text-decoration:solid;
    font-size: 1em;
  }
.btn{
border-radius: 40px;
}

.active {
    color: green;
  }


/*Hamburger */
.menu-bars{
display:none;
flex-direction: column;
height:20px;
justify-content: space-between;
position:relative;
  z-index:999;
}
.menu-bars input{
position: absolute;
width:40px;
height:28px;
left:-5px;
top:-3px;
opacity: 0;
cursor:pointer;
z-index: 2;
}

.menu-bars span{
display:block;
width:28px;
height:3px;
background-color: black;
border-radius: 3px;
transition: all 0.3s;
}

.menu-bars span:nth-child(2){
transform-origin: 0 0 ;
}

.menu-bars span:nth-child(4){
  transform-origin: 0 100% ;
  }

.menu-bars input:checked ~ span:nth-child(2){
background-color: black;
color: white;
transform: rotate(45deg) translate(-1px, -1px);
}
.menu-bars input:checked ~ span:nth-child(4){
  background-color: black;
  transform: rotate(-45deg) translate(-1px,0); 
  }

  .menu-bars input:checked ~ span:nth-child(3){
    opacity: 0;
    transform: scale(0); 
    }

/*******************************************************************************************************************
                                               Navigation bar
*******************************************************************************************************************/

/*******************************************************************************************************************
                                               Section1
*******************************************************************************************************************/


  .container {
    max-width: 800px;
    margin: 20px auto;
    padding: 20px;
    border-radius: 10px;
    background-color: darkgreen;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
  }

  h1 {
    text-align: center;
    margin-bottom: 20px;
    color:#ffffff;
  }

  h1 {
  text-align: center;
  margin-bottom: 20px;
  color: #ffffff;
  overflow: hidden; /* Ensures the text doesn't overflow during animation */
  border-right: .15em solid darkgreen; /* Creates the blinking cursor effect */
  white-space: nowrap; /* Ensures the text appears on a single line */
  animation: typing 3s steps(30, end), blink-caret .5s step-end infinite;
}

@keyframes typing {
  from {
    width: 0;
  }
  to {
    width: 100%;
  }
}

@keyframes blink-caret {
  from, to {
    border-color: transparent;
  }
  50% {
    border-color: darkgreen;
  }
}


  .sensor-card {
    display: flex;
    flex-direction: column;
    padding: 20px;
    margin-bottom: 20px;
    border-radius: 10px;
    background-color: #ffffff;
    box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
  }

  .sensor-card h2 {
    margin-top: 0;
    margin-bottom: 10px;
  }

  .sensor-data {
    font-size: 18px;
    margin-top: 5px;
  }

  /*******************************************************************************************************************
                                                 Section1
  *******************************************************************************************************************/
  @media screen and (max-width: 600px) {
    .card {
      width: calc(100% - 40px);
    }
  }

  @media only screen and (max-width: 768px){
    nav ul{
    width:50%;
    }
    
    }
    
    @media only screen and (max-width: 576px){
      .menu-bars{
      display:flex;
      }
      nav ul{
      position:absolute;
      right:0;
      top:0;
      color: black;
      width:100%;
      height:100vh;
      justify-content: space-evenly;
      flex-direction: column;
      align-items: center;
      background-color: white;
      z-index: 1;
      transform: translateY(-100%);
      transition: all 1s;
      }
    
      nav ul li a {
        color: black;
        text-decoration: none;
        font-size: 1em;
      }
      
      nav ul li a:hover {
          color: green;
          text-decoration:solid;
          font-size: 1em;
        }
      .btn{
      border-radius: 40px;
      }
      }
      nav ul.slide{
        transform: translateY(0);
      }

  .setpoints {
      background-color: #fff;
      padding: 20px;
      border-radius: 10px;
      box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
      max-width: 400px;
      width: 100%;
      box-sizing: border-box;
    }

  
    h1 {
      text-align: center;
      color:#ffffff;
      margin-bottom: 20px;
    }
    label {
      display: block;
      margin-bottom: 5px;
      font-weight: bold;
      color:#ffffff;
    }
   
    input[type="number"] {
  width: calc(100% - 20px);
  padding: 10px;
  margin-bottom: 20px;
  border: 1px solid #ccc;
  border-radius: 5px;
  box-sizing: border-box;
  -moz-appearance: textfield; /* Firefox */
}


input[type="number"] {
 -moz-appearance: textfield; /* Firefox */
}
    input[type="submit"] {
  width: 40%; 
  padding: 10px;
  background-color: #4CAF50;
  border: none;
  border-radius: 5px;
  color: white;
  font-size: 16px;
  cursor: pointer;
  transition: background-color 0.3s;
  display: block; 
  margin: 0 auto; 
}
 /************************update*****************/
input[type="submit"] {
  width: 40%;
  padding: 10px;
  background-color: #4CAF50;
  border: none;
  border-radius: 5px;
  color: white;
  font-size: 16px;
  cursor: pointer;
  transition: transform 0.3s; /* Only transition transform for scaling */
  display: block;
  margin: 0 auto;
}

/* Keyframes for color animation */
@keyframes colorChange {
  0% {
    background-color: #4CAF50; /* Start color */
  }
  50% {
    background-color: yellowgreen; /* Middle color */
  }
  100% {
    background-color: #4CAF50; /* End color */
  }
}

input[type="submit"]:hover {
  animation: colorChange 1s infinite; /* Apply colorChange animation infinitely */
  transform: scale(1.1); /* Scale up the button on hover */
}
 /************************update*****************/

  /*******************************************************************************************************************
                                                 Section1
  *******************************************************************************************************************/
  @media screen and (max-width: 600px) {
    .card {
      width: calc(100% - 40px);
    }
  }

  @media only screen and (max-width: 768px){
    nav ul{
    width:50%;
    }
    
    }
    
    @media only screen and (max-width: 576px){
      .menu-bars{
      display:flex;
      }
      nav ul{
      position:absolute;
      right:0;
      top:0;
      color: white;
      width:100%;
      height:100vh;
      justify-content: space-evenly;
      flex-direction: column;
      align-items: center;
      background-color: black;
      z-index: 1;
      transform: translateY(-100%);
      transition: all 1s;
      }
    
      nav ul li a {
        color: white;
        text-decoration: none;
        font-size: 1em;
      }
      
      nav ul li a:hover {
          color: green;
          text-decoration:solid;
          font-size: 1em;
        }
      .btn{
      border-radius: 40px;
      }
      }
      nav ul.slide{
        transform: translateY(0);
      }
    
    
    </style>
</head>
<body>
<!---------------------------------------------------------------------------------------------------
                                      Navigation Bar
---------------------------------------------------------------------------------------------------->   
<nav>
    <div class="logo">
        <h2><img src="https://content.jdmagicbox.com/comp/ahmedabad/j9/079pxx79.xx79.211022142123.d1j9/catalogue/grow-green-ahmedabad-plant-manufacturers-tmu97ajadl.jpg" width="80px" height="80px">AGRINTEL</h2>
  </div>

<ul>
    <li><a href="/"><i class="fa fa-home"></i>Home</a></li>
    <li><a href="/plants"><i class="fas fa-seedling active"></i> Plants</a></li>
    <li><a href="/animals"><i class="fas fa-paw"></i> Animals</a></li>
    <li><a href="/setpoints" class="active"><i class="fas fa-cog" aria-hidden="true"></i> Setpoints</a></li>
    <li><a href="/contact"><i class="fas fa-envelope"></i> Contact Us</a></li>
    <!--<li><a href="#"><i class="fas fa-sign-in-alt"></i> Log in</a></li>-->
    <!--<li><a href="#"><i class="fas fa-user-plus"></i> Sign Up</a></li>-->
</ul>
<div class="menu-bars" id="toggle">
<input type="checkbox">
<span></span>
<span></span>
<span></span>
</div>
</nav>
<!---------------------------------------------------------------------------------------------------
                                      Navigation Bar
---------------------------------------------------------------------------------------------------->   


<!--------------------------------------------------------------------------------------------------------------------
                                                      Section1
--------------------------------------------------------------------------------------------------------------------->
<div class="container">
  <h1>Set Sensor Setpoints</h1>
  <form action="/setpoints" method="POST">
    <div>
    <label for="temperature">Temperature Setpoint:</label>
    <input type="number" step="0.1" id="temperature" name="temperature" value="{temperatureSetpoint}">
  </div>
    
    <div>
    <label for="humidity">Humidity Setpoint:</label>
    <input type="number" step="0.1" id="humidity" name="humidity" value="{humiditySetpoint}">
  </div>
    
    <div>
    <label for="moisture">Moisture Setpoint:</label>
    <input type="number" step="0.1" id="moisture" name="moisture" value="{moistureSetpoint}">
  </div>
    
    <div>
    <label for="ph">PH Setpoint:</label>
    <input type="number" step="0.1" id="ph" name="ph" value="{phSetpoint}">
  </div>
    
    <div>
    <label for="fertility">Fertility Setpoint:</label>
    <input type="number" step="0.1" id="fertility" name="fertility" value="{fertilitySetpoint}">
  </div>
    
    <div>
    <input type="submit" value="Submit">
  </div>
  </form>
  </div>
<!--------------------------------------------------------------------------------------------------------------------
                                                        Section1
--------------------------------------------------------------------------------------------------------------------->
<script>
  const menuToggle= document.querySelector(".menu-bars");
const nav = document.querySelector("nav ul");


menuToggle.addEventListener("click", () => {
  nav.classList.toggle("slide");
  });

  function updateData(temperature, humidity, moisture){
    document.getElementById("temperature").innerText = temperature;
    document.getElementById("humidity").innerText = humidity;
    document.getElementById("moisture").innerText = moisture;
    document.getElementById("ph").innerText = ph;
    document.getElementById("fertility").innerText = fertility;
  }
  
  function fetchSensorData(){
    fetch('/data')
      .then(response => response.json())
      .then(data => updateData(data.tempereture, data.humidity, data.moisture,data.ph,data.fertility));
  }
  
  fetchSensorData();
  
  </script>
</body>
</html>

)=====";

#endif
