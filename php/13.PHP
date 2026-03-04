
<?php

if (isset($_POST['submit'])) {

    $name    = htmlspecialchars($_POST['name']);
    $age     = htmlspecialchars($_POST['age']);
    $gender  = htmlspecialchars($_POST['gender']);
    $address = htmlspecialchars($_POST['address']);
    $email   = htmlspecialchars($_POST['email']);

    echo "<h2>Your Bio Data</h2>";
    echo "<b>Name:</b> $name <br>";
    echo "<b>Age:</b> $age <br>";
    echo "<b>Gender:</b> $gender <br>";
    echo "<b>Address:</b> $address <br>";
    echo "<b>Email:</b> $email <br>";

    echo "<br><a href='biodata.php'>Go Back</a>";
    exit;
}