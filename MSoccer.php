<?php
    require "Website.inc";

    HTMLStart( "Men's Soccer Page" );

?>
    <section>
        <body>
            <?php
                DisplaySport(6);
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