# • Exercise 2: Window creation

Now it's time to create a window.
To do this we will make a function named "create_window":
```c
sfRenderWindow *create_window(const char *name, sfVector2i dimensions)
{
    // Create a sfRenderWindow and return a pointer of it
}
```

After doing that, replace the _`return 0;`_ from `main` to _`return workshop();`_
<br/>
The `main` function should now look like this:
```c
int main(int argc, const char *const *argv, const char *const *env)
{
    if (is_error(argc, argv, env))
        return 84;
    return workshop();
}
```
It's time to do a loop for displaying the window :
```c
int workshop()
{
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});

    while (/* While the window is open */) {
        // Display the window
    }
    return 0;
}
```
_(Don't forget to destroy the window)_
<br/><br/>
_Utils functions:_
- sfRenderWindow_create
- sfRenderWindow_isOpen
- sfRenderWindow_display
- sfRenderWindow_destroy

<br/>

If the trainers validate your code, go to [Exercise 3](./doc/exercise3.md)
