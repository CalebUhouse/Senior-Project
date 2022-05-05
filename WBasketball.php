<?php
    require "Website.inc";

    HTMLStart( "Women's Basketball Page" );

?>
    <section>
        <body>
            <?php
                DisplaySport(4);
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