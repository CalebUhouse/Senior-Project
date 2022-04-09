<?php
    // start the session
    session_start();

    // inserts header
    function HTMLHeader()
    {
?>

        <header class="section-header">
            <a href="Index.php" class="heading webtext">HavenNFTs</a>
        </header>

<?php
    }
    //inserts beginning of HTML to the start of the main container
    function HTMLStart( $Title )
    {
?>
    <!DOCTYPE html>
        <html lang="en">
    <head>
        <meta charset="UTF-8">
        <title><?php echo $Title ?></title>
        <link href="Website.css" type="text/css" rel="Stylesheet" />
        <script src="Website.js" defer></script>
    </head>
    <body class="website-color">
        <main>

<?php
    }
    // inserts the closing html entities
    function HTMLEnd()
    {
?>
        </main>
    </body>
</html>

<?php
    }
    // inserts the navigation
    function PageNav()
    {
?>
        <nav>
            <div class="navigation-bar">
                <button class="sportsnav regbtn" href="Index.php">Home</button>
            </div>
            <div class="navigation-bar dropdown">
                <button class="sportsnav dropbtn" onclick="myFunction('men-Dropdown')">Men's Sports</button>
                <div id="men-Dropdown" class="dropdown-content">
                    <a href="MBasketball.php">Basketball</a>
                    <a href="MSoccer.php">Soccer</a>
                    <a href="MFootball.php">Football</a>
                    <a href="Baseball.php">Baseball</a>
                </div>
            </div>
            <div class="navigation-bar dropdown">
                <button class="sportsnav dropbtn" onclick="myFunction('women-Dropdown')">Women's Sports</button>
                <div id="women-Dropdown" class="dropdown-content">
                    <a href="WBasketball.php">Basketball</a>
                    <a href="WSoccer.php">Soccer</a>
                    <a href="Softball.php">Softball</a>
                </div>
            </div>
        </nav>
<?php
    }
    // inserts the footer
    function PageFooter()
    {
?>
        <footer>
            <p class="centered">Something Not Look Right?</p>
            <p class="centered">Email cmu8706@lockhaven.edu for support!</p>
        </footer>
<?php
    }
?>