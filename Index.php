<?php
    require "Website.inc";

    HTMLStart( "Index Page" );

?>
    <section>
        <body class="mainGrid">
            <?php
                Athletes();
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