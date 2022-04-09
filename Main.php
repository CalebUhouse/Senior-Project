<!DOCTYPE html>
    <html lang="en">
<head>
    <meta charset="UTF-8">
    <title></title>
    <link href="Website.css" type="text/css" rel="Stylesheet" />
    <script src="Website.js" defer></script>
</head>
<body class="website-color">
    <main>
        <header class="section-header">
            <a href="Index.php" class="heading webtext">HavenNFTs</a>
        </header>
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
        <aside>
            <p>HavenNFT's is a website built to promote and give recognition to the athletes of Lock Haven University. Each of the
                atheletes are given an NFT that belongs to them and behaves as if it was a virtual trading card. Only the athelete would 
                own their card however so there would be only one copy of the NFT in existence.
            </p>
        </aside>
        <section>
            <p>Section</p>
        </section>
        <footer>
            <p class="centered">Something Not Look Right?</p>
            <p class="centered">Email cmu8706@lockhaven.edu for support!</p>
        </footer>
    </main>
</body>
</html>
