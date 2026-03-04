<!DOCTYPE html>
<html>
<head>
    <title>Student Mark List</title>
</head>
<body>

<h4>Yedhukrishna A.M</h4>
<h4>NMAXSCS030</h4>

<h2>Enter Roll Number</h2>

<form method="post" action="">
    <input type="number" name="roll_no" required>
    <input type="submit" name="submit" value="Show Mark List">
</form>
<hr>

<?php
if (isset($_POST['submit'])) {

    $roll = $_POST['roll_no'];

    $conn = mysqli_connect("localhost", "root", "", "student_db");

    if (!$conn) {
        die("Connection Failed: " . mysqli_connect_error());
    }


    $sql = "SELECT * FROM students WHERE roll_no = '$roll'";
    $result = mysqli_query($conn, $sql);

    if (mysqli_num_rows($result) > 0) {

        $row = mysqli_fetch_assoc($result);

        echo "<h2>Mark List of Student</h2>";
        echo "<b>Roll No :</b> " . $row['ROLL_NO'] . "<br>";
        echo "<b>Name :</b> " . $row['NAME'] . "<br>";
        echo "<b>Mark :</b> " . $row['MARK'] . "<br>";
        echo "<b>Grade :</b> " . $row['GRADE'] . "<br>";

    } else {
        echo "<h3>No student found with Roll No: $roll</h3>";
    }

    mysqli_close($conn);
}
?>

</body>
</html>
