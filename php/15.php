<!DOCTYPE html>
<html>
<head>
    <title>Perfect, Abundant or Deficient Number Checker</title>
</head>
<body>
    <h2>Check Whether a Number is Perfect, Abundant or Deficient</h2>

    <h4>Yedhukrishna A.M</h4>
    <h4>NMAXSCS030</h4>

    <form method="post" action="">
        <label>Enter a number:</label>
        <input type="number" name="number" required>
        <input type="submit" name="check" value="Check">
    </form>

    <?php
    if (isset($_POST['check'])) {
        $num = $_POST['number'];


        function sumOfDivisors($num) {
            $sum = 0;
            for ($i = 1; $i <= $num / 2; $i++) {
                if ($num % $i == 0) {
                    $sum += $i;
                }
            }
            return $sum;
        }

        $sum = sumOfDivisors($num);

        
        if ($sum == $num) {
            echo "<h3>$num is a Perfect number.</h3>";
        } elseif ($sum > $num) {
            echo "<h3>$num is an Abundant number.</h3>";
        } else {
            echo "<h3>$num is a Deficient number.</h3>";
        }
    }
    ?>
</body>
</html>
