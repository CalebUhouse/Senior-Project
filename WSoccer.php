<?php
    require "Website.inc";

    HTMLStart( "Women's Soccer Page" );

?>
    <section>
        <body>
            <?php
                DisplaySport(7);
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