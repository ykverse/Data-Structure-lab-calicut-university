<!DOCTYPE html>
<html>
<head>
    <title>Armstrong Number Check</title>
</head>
<body>


<h4>Yedhukrishna A.M</h4>
    <h4>NMAXSCS030</h4>

<h2>Check Armstrong Number</h2>


<form method="post" action="">
    <label>Enter a Number:</label><br>
    <input type="number" name="num" required>
    <input type="submit" name="check" value="Check">
</form>
<hr>

<?php
if (isset($_POST['check'])) {

    $num = $_POST['num'];
    $sum = 0;
    $temp = $num;

   
    $digits = strlen((string)$num);

    
    while ($temp > 0) {
        $digit = $temp % 10;
        $sum += pow($digit, $digits);
        $temp = (int)($temp / 10);
    }

    
    if ($sum == $num) {
        echo "<h3 style='color:green;'>$num is an Armstrong Number.</h3>";
    } else {
        echo "<h3 style='color:red;'>$num is NOT an Armstrong Number.</h3>";
    }
}
?>

</body>
</html>
