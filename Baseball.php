<?php
    require "Website.inc";

    HTMLStart( "Men's Basketball Page" );

?>
    <section>
        <body>
            <?php
                DisplaySport(1);
            ?>
        </body>
    </section>

<?php

    HTMLHeader();
    PageNav();
    PageAside();
    PageFooter();
    HTMLEnd();
?>