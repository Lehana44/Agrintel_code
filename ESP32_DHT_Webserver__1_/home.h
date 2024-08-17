#ifndef HOME_H
#define HOME_H

const char* home = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.3/css/all.min.css">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
    <style>
      @import url('https://fonts.googleapis.com/css2?family=Roboto:ital,wght@0,100;0,300;0,400;0,500;1,100;1,300;1,400&display=swap');
*{
 margin:0;
 padding:0;
}
body{
 font-family:'Roboto',sans-serif;
  overflow-x:hidden;
  background: #fff;
}
/*******************************************************************************************************************
                                               Navigation bar
*******************************************************************************************************************/
nav{
display:flex;
background-color: green,white;
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

    .nav-icon {
            color: black; /* Set icon color to black */
            margin-right: 5px; /* Add some spacing between icon and text */
            background-color: black;
        }

/*******************************************************************************************************************
                                               Navigation bar
*******************************************************************************************************************/


/*******************************************************************************************************************
                                               Intro
*******************************************************************************************************************/


/*******************************************************************************************************************
                                               Section1
*******************************************************************************************************************/
.intro {
  text-align: center;
  justify-content: center;
  border-radius: 10px;
}

.container {
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
}



.card {
  width: 300px;
  margin: 20px;
  border: 1px solid #ccc;
  border-radius: 25px;
  box-shadow: 0 10px 20px rgba(0, 0, 0, 0.1);
  transition: all 0.3s ease;
}

.card:hover {
  transform: translateY(-5px);
  box-shadow: 0 8px 16px rgba(0, 0, 0, 0.1);
}

.card img {
  width: 100%;
  height: 300px;
  border-top-left-radius: 25px;
  border-top-right-radius: 25px;
}

.card .content {
  padding: 20px;
}

.intro .smart_image {
  justify-content: center;
  align-items: center;
  align-self: center;
  position: absolute;
  width: 500px;
  height: 500px;
  left: 50%;
}


    .intro h1 {
      text-align: center; /* Center align heading */
      margin-bottom: 20px; /* Add spacing below heading */
    }

    .intro {
    text-align: center; /* Center align text */
    max-width: 800px; /* Limit maximum width for better readability */
    margin: 0 auto; /* Center align the container */
    justify-content: center;
    padding: 20px; /* Add padding for spacing */
}

.intro img {
    max-width: 100%; /* Ensure the image scales responsively */
    height: auto; /* Maintain aspect ratio */
    margin-top: 20px; /* Add some spacing above the image */
}

/*.intro p {
  justify-content: center;
}*/

    .img-fluid {
      border-radius: 5px;
    }

    
/*******************************************************************************************************************
                                               Section1
*******************************************************************************************************************/

   /*******************************************************************************************************************
                                                 Footer
  *******************************************************************************************************************/
  .site-footer
{
  background-color: green;
  padding:45px 0 20px;
  font-size:15px;
  line-height:24px;
  color:#fff;
}
.site-footer hr
{
  border-top-color:#bbb;
  opacity:0.5
}
.site-footer hr.small
{
  margin:20px 0
}
.site-footer h6
{
  color:#000;
  font-size:16px;
  text-transform:uppercase;
  margin-top:5px;
  letter-spacing:2px
}
.site-footer a
{
  color:#fff;
}
.site-footer a:hover
{
  color:#3366cc;
  text-decoration:none;
}
.footer-links
{
  padding-left:0;
  list-style:none
}

.footer-links li
{
  display:block
}
.footer-links a
{
  color:#fff;
}
.footer-links a:active,.footer-links a:focus,.footer-links a:hover
{
  color:#fff;
  text-decoration:none;
}
.footer-links.inline li
{
  display:inline-block
}
.site-footer .social-icons
{
  text-align:right
}
.site-footer .social-icons a
{
  width:40px;
  height:40px;
  line-height:40px;
  margin-left:6px;
  margin-right:0;
  border-radius:100%;
  background-color:#33353d
}
.copyright-text
{
  margin:0
}
@media (max-width:991px)
{
  .site-footer [class^=col-]
  {
    margin-bottom:30px
  }
}
@media (max-width:767px)
{
  .site-footer
  {
    padding-bottom:0
  }
  .site-footer .copyright-text,.site-footer .social-icons
  {
    text-align:center
  }
}
.social-icons
{
  padding-left:0;
  margin-bottom:0;
  list-style:none
}
.social-icons li
{
  display:inline-block;
  margin-bottom:4px
}
.social-icons li.title
{
  margin-right:15px;
  text-transform:uppercase;
  color:#fff;
  font-weight:700;
  font-size:13px
}
.social-icons a{
  background-color:green;
  color:#fff;
  font-size:16px;
  display:inline-block;
  line-height:44px;
  width:44px;
  height:44px;
  text-align:center;
  margin-right:8px;
  border-radius:100%;
  -webkit-transition:all .2s linear;
  -o-transition:all .2s linear;
  transition:all .2s linear
}
.social-icons a:active,.social-icons a:focus,.social-icons a:hover
{
  color:green;
  background-color:#000;
}
.social-icons.size-sm a
{
  line-height:34px;
  height:34px;
  width:34px;
  font-size:14px
}
.social-icons a.facebook:hover
{
  background-color:black;
  color:#fff;
}
.social-icons a.twitter:hover
{
  background-color:black;
  color:#fff;
}
.social-icons a.linkedin:hover
{
  background-color:black;
  color:#fff;
}
.social-icons a.dribbble:hover
{
  background-color:black;
  color:#fff;

}

@media (max-width:767px)
{
  .social-icons li.title
  {
    display:block;
    margin-right:0;
    font-weight:600
  }
}
    /*******************************************************************************************************************
                                                 Footer
  *******************************************************************************************************************/
@media only screen and (max-width: 768px){
nav ul{
width:50%;
}

}

@media only screen and (max-width: 576px){
  .menu-bars{
  display:flex;
  color: #000;
  }
  nav ul{
  position:absolute;
  right:0;
  top:0;
  color: #000;
  width:100%;
  height:100vh;
  justify-content: space-evenly;
  flex-direction: column;
  align-items: center;
  background-color: #fff;
  z-index: 1;
  transform: translateY(-100%);
  transition: all 1s;
  }

  nav ul li a {
    color: #000;
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

  .h1,h2 {
    animation: fadeInOut 3s ease-in-out infinite;
}

@keyframes fadeInOut {
    0%, 100% { opacity: 0; }
    50% { opacity: 1; }
}

.img-fluid {
    max-width: 100%;
    height: auto;
    display: block;
    transition: transform 0.3s ease;
}

.img-fluid:hover {
    animation: shake 0.5s ease;
    animation-duration: infinite;
}

@keyframes shake {
    0% { transform: translate(0, 0) rotate(0); }
    10%, 30%, 50%, 70%, 90% { transform: translate(-5px, 0) rotate(-5deg); }
    20%, 40%, 60%, 80%, 100% { transform: translate(5px, 0) rotate(5deg); }
}

    </style>
</head>
<body>
<!--------------------------------------------------------------------------------------------------------------------
                                                      Navigation Bar
--------------------------------------------------------------------------------------------------------------------->
<nav>
  <div class="logo">
      <h2><img class="logo1" src="https://content.jdmagicbox.com/comp/ahmedabad/j9/079pxx79.xx79.211022142123.d1j9/catalogue/grow-green-ahmedabad-plant-manufacturers-tmu97ajadl.jpg"> AGRINTEL</h2>
  </div>

  <ul>
      <li><a href="/" class="active"><i class="fa fa-home"></i>Home</a></li>
    <li><a href="/plants" ><i class="fas fa-seedling active"></i> Plants</a></li>
    <li><a href="/animals"><i class="fas fa-paw"></i> Animals</a></li>
    <li><a href="/setpoints" ><i class="fas fa-cog" aria-hidden="true"></i> Setpoints</a></li>
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
<!--------------------------------------------------------------------------------------------------------------------
                                                      Navigation Bar
--------------------------------------------------------------------------------------------------------------------->

<!--------------------------------------------------------------------------------------------------------------------
                                                      Intro
--------------------------------------------------------------------------------------------------------------------->

  <div class="intro">
    <h1>Nurturing Nature With Intelligence</h1>
   
  <p>A smart farm leverages advanced technology and automation to provide precision agriculture services like optimized irrigation, fertilization, and pest management through sensor-based analytics. It monitors and controls greenhouse environments and integrates real-time weather data for optimal crop growth. Drones, satellites, and sensors offer detailed crop monitoring, aiding proactive management decisions. Data-driven analytics enable informed choices in planting, harvesting, and resource allocation, with predictive modeling for yield forecasting and risk mitigation. Efficient water use, renewable energy integration, and supply chain transparency enhance sustainability and market access. Smart farms also support farmer education and innovation in agricultural technology.</p>
    <img src="https://www.synox.io/wp-content/uploads/2022/04/smart-farming-agriculture-du-futur-iot.jpg"  class="img-fluid" alt="Farming Image">
  </div>
  


<!--------------------------------------------------------------------------------------------------------------------
                                                      Intro
--------------------------------------------------------------------------------------------------------------------->


<!--------------------------------------------------------------------------------------------------------------------
                                                      Section1
--------------------------------------------------------------------------------------------------------------------->
<div class="container">
  <div class="card">
    <img src="https://readwrite.com/wp-content/uploads/2023/06/Untitled-design-2023-06-22T101434.211-900x506.jpg" alt="Plants">
    <div class="content">
      <h2>Monitoring</h2>
    </div>
  </div>
  <div class="card">
    <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRoeL9oBIbZBnot_4nGLamR0w8mo2qfWJcGoANX23TugzBN0BJa" alt="Animals">
    <div class="content">
      <h2>Tracking</h2>
    </div>
  </div>
  <div class="card">
    <img src="https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcTwJDvBX7T2dRhFgXZVFmdxnjQta1bjt0q72379jBTdnFAid1qF" alt="Updates">
    <div class="content">
      <h2>Upcoming</h2>
    </div>
  </div>
</div>
<!--------------------------------------------------------------------------------------------------------------------
                                                      Section1
--------------------------------------------------------------------------------------------------------------------->


<!--------------------------------------------------------------------------------------------------------------------
                                                        Footer
--------------------------------------------------------------------------------------------------------------------->
<footer class="site-footer">
  <div class="container">
    <div class="row">
      <div class="col-sm-12 col-md-6">
        <h6>About</h6>
        <p class="text-justify texe1">Welcome to the forefront of agricultural innovation with Agrintel, where cutting-edge technology meets sustainable farming practices. At Agrintel, we are revolutionizing the agriculture industry by harnessing the power of smart technology to optimize crop yields, conserve resources, and ensure food security for future generations. Our commitment to innovation drives us to create integrated solutions that empower farmers to make data-driven decisions, enhance productivity, and mitigate environmental impact. Join us in cultivating a smarter, more sustainable future with Agrintel, where the future of farming is now.</p>
      </div>

      <div class="col-xs-6 col-md-3">
        <h6>Categories</h6>
        <ul class="footer-links">
          <li><a href="https://garden.org/">Plants Guides</a></li>
          <li><a href="https://www.animalresearch.info/en/search-results#e=external&q=horses">Animal Guides</a></li>
          <li><a href="https://jxct-iot.com/product3/product.php?class2=78&gad_source=1&gclid=CjwKCAjwvvmzBhA2EiwAtHVrb_u_X-LdpQ3gMfCjGwHBtG2yfoKkfHBc9vq6lHedUoWUtT2dse-wfhoCWmAQAvD_BwE">Updates</a></li>
        </ul>
      </div>

      <div class="col-xs-6 col-md-3">
        <h6>Quick Links</h6>
        <ul class="footer-links">
          <li><a href="index.html">Home</a></li>
          <li><a href="plants.html">Plants</a></li>
          <li><a href="animals.html">Animals</a></li>
          <li><a href="contact.html">Contact</a></li>
        </ul>
      </div>
    </div>
    <hr>
  </div>
  <div class="container">
    <div class="row">
      <div class="col-md-8 col-sm-6 col-xs-12">
        <p class="copyright-text">Copyright &copy; 2024 All Rights Reserved by 
     <a href="#" class="agri">AGRINTEL</a>
        </p>
      </div>

      <div class="col-md-4 col-sm-6 col-xs-12">
        <ul class="social-icons">
          <li><a class="facebook" href="#"><i class="fa fa-facebook"></i></a></li>
          <li><a class="twitter" href="#"><i class="fa fa-twitter"></i></a></li>
          <li><a class="dribbble" href="#"><i class="fa fa-instagram"></i></a></li> 
        </ul>
      </div>
    </div>
  </div>
</footer>
<!--------------------------------------------------------------------------------------------------------------------
                                                      Footer
--------------------------------------------------------------------------------------------------------------------->
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