# tips

## Compile with clang:
> clang -l user32.lib -l ole32.lib -l d2d1.lib -o helloengine_d2d.exe .\helloworld_d2d.cpp

**SUCCESS**

## Compile with gcc:
error!!! not solve... Maybe I should install 'w32api' package from Libs category
~~> gcc -l user32.lib -l gdi32.lib -o helloengin_win.exe helloworld_win.c~~

**FAIL**

## Compile with cl:
> cl user32.lib ole32.lib d2d1.lib .\helloworld_d2d.cpp

**SUCCESS**