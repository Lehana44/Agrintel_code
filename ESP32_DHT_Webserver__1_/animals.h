#ifndef ANIMALS_H
#define ANIMALS_H

const char* animals = R"=====(
    
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.3/css/all.min.css">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css">
    <script src="https://polyfill.io/v3/polyfill.min.js?features=default"></script>
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
    background: url(https://www.kalmbachfeeds.com/cdn/shop/articles/sheep-grazing-on-pasture-up-close.jpg?v=1706873635);
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
  nav.logo{
  letter-spacing: 3px;
  }

  .logo .logo1 {
width: 80px;
height: 80px;
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
                                                 Intro
  *******************************************************************************************************************/
  
  .intro  {
      border: 5px solid black;
  }
  /*******************************************************************************************************************
                                                 Section1
  *******************************************************************************************************************/
  .container {
    max-width: 800px;
    margin: 0 auto;
    padding: 20px;
}

h1,
h2 {
    color: #333;
}

.card {
    border: 1px solid #ccc;
    border-radius: 5px;
    margin-bottom: 20px;
}

.card-header {
    background-color: #f0f0f0;
    padding: 10px;
    border-bottom: 1px solid #ccc;
}

.card-body {
    padding: 10px;
}

.map {
    position: relative;
    padding-bottom: 56.25%; /* Aspect ratio 16:9 for responsive iframe */
    height: 0;
    overflow: hidden;
    border-radius: 5px;
}

.map iframe {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    border-radius: 5px;
}

/* Responsive Styles */
@media (max-width: 768px) {
    .container {
        padding: 10px;
    }

    .card {
        margin-bottom: 15px;
    }
}

@media (max-width: 576px) {
    .card-body {
        font-size: 0.9em;
    }

    .map {
        padding-bottom: 75%; /* Adjust aspect ratio for smaller screens */
    }
}

  /*******************************************************************************************************************
                                                 Section1
  *******************************************************************************************************************/

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

    .active {
    color: green;
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
    <li><a href="/plants" ><i class="fas fa-seedling active"></i> Plants</a></li>
    <li><a href="/animals" class="active">><i class="fas fa-paw"></i> Animals</a></li>
    <li><a href="/setpoints"> <i class="fas fa-cog" aria-hidden="true"></i> Setpoints</a></li>
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
    <h1>Animal Dashboard</h1>
    <div class="card">
        <div class="card-header">
            <h2>Animal Count</h2>
        </div>
        <div class="card-body">
            <p id="animal-count">0</p>
        </div>
    </div>
    <div class="card">
        <div class="card-header">
            <h2>Animal Vitals</h2>
        </div>
        <div class="card-body">
            <p id="animal-vitals">No data available</p>
        </div>
    </div>
    <div id="map" class="card map">
        <iframe  src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d1079.35851881738!2d27.51603516965342!3d-29.302367328947348!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x1e8dcb97853e6e95%3A0x4c8178cb7da34116!2sImpact%20School!5e1!3m2!1sen!2sls!4v1716634757776!5m2!1sen!2sls" width="600" height="450" style="border:0;" allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"></iframe>
    </div>
    <div class="card">
        <div class="card-header">
            <h2>Room Cleanliness</h2>
        </div>
        <div class="card-body">
            <p id="room-cleanliness">No data available</p>
        </div>
    </div>
</div>
<!--------------------------------------------------------------------------------------------------------------------
                                                        Section1
--------------------------------------------------------------------------------------------------------------------->


<script src="https://maps.googleapis.com/maps/api/js?key=YOUR_API_KEY&callback=initMap" async defer></script>
<script>
    const menuToggle= document.querySelector(".menu-bars");
const nav = document.querySelector("nav ul");


menuToggle.addEventListener("click", () => {
  nav.classList.toggle("slide");
  });
</script>
</body>
</html>
)=====";
#endif