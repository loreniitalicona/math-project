<!DOCTYPE html>
<html>
<head>
<style>
body {
  font-family: Arial;
}

.header {
  background-color: #9933cc;
  color: #ffffff;
  padding: 10px;
}

.content {
  padding: 10px;
}
</style>
</head>
<body>

<h1 class="header">Math Assignment</h1>

<div class="content">
  <p>Write a program to calculate the area of a rectangle.</p>
  <p>The formula for calculating the area is: Area = Length x Width.</p>
  <p>Prompt the user to enter the length and width of a rectangle, then calculate its area and display it on the screen.</p>
</div>

<script>
  // Get the input values from the user
  let length = parseFloat(prompt("Enter the length of the rectangle: "));
  let width = parseFloat(prompt("Enter the width of the rectangle: "));
  
  // Calculate the area of the rectangle
  let area = length * width;
  
  // Display the result on the screen
  alert("The area of the rectangle is: " + area);
</script>

</body>
</html>