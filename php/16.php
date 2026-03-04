<!DOCTYPE html>
<html>
<head>
    <title>Login Page</title>
</head>
<body>

<h2>User Login</h2>
<h4>Yedhukrishna A.M</h4>
    <h4>NMAXSCS030</h4>

<form method="post" action="">
    <label>Username:</label><br>
    <input type="text" name="username" required><br><br>

    <label>Password:</label><br>
    <input type="password" name="password" required><br><br>

    <input type="submit" name="login" value="Login">
</form>

<hr>

<?php
if (isset($_POST['login'])) {

    $uname = $_POST['username'];
    $pass  = $_POST['password'];

    
    $conn = mysqli_connect("localhost", "root", "", "student_db");

    if (!$conn) {
        die("Database connection failed: " . mysqli_connect_error());
    }

    
    $sql = "SELECT * FROM login WHERE username='$uname' AND password='$pass'";
    $result = mysqli_query($conn, $sql);

    if (mysqli_num_rows($result) == 1) {
        echo "<h3 style='color:green;'>Login Successful!</h3>";
        echo "Welcome, <b>$uname</b>";
    } else {
        echo "<h3 style='color:red;'>Invalid Username or Password</h3>";
    }

    mysqli_close($conn);
}
?>

</body>
</html>
