<?php
    require "Website.inc";

    HTMLStart( "Index Page" );

?>
    <section>
        <body>
            <h1>
                <?php
                Athletes();
                ?>
            </h1>
        </body>
    </section>

<?php

    HTMLHeader();
    PageNav();
    PageFooter();
    HTMLEnd();
?>