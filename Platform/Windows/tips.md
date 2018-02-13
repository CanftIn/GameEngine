# tips

## Compile with clang:
> clang -l user32.lib -l gdi32.lib -o helloengin_win.exe helloworld_win.c
**SUCCESS**

## Compile with gcc:
error!!! not solve... Maybe I should install 'w32api' package from Libs category
> gcc -l user32.lib -l gdi32.lib -o helloengin_win.exe helloworld_win.c
**FAIL**

## Compile with cl:
> cl user32.lib gdi32.lib helloworld_win.c
**SUCCESS**