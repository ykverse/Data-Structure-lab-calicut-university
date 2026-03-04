<!DOCTYPE html>
<html>
<head>
    <title>Last Visited Date-Time</title>
</head>
<body>
    <h2>Welcome to My Web Page</h2>

    <h4>Yedhukrishna A.M</h4>
    <h4>NMAXSCS030</h4>

    <?php

    if (isset($_COOKIE['lastVisit'])) {
        echo "<p><strong>Last visited:</strong> " . $_COOKIE['lastVisit'] . "</p>";
    } else {
        echo "<p>Welcome! This is your first visit.</p>";
    }


    $currentTime = date("Y-m-d H:i:s"); 
    setcookie("lastVisit", $currentTime, time() + (86400 * 30));
    ?>

    <p>Refresh or revisit this page to see the last visited date-time.</p>
</body>
</html>
