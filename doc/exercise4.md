# • Exercise 4: Sprite creation</span>

We will now create a sprite and display it.
<br/>
To do this we will make a function named "create_sprite":
```c
sfSprite *create_sprite(const char *filepath, sfVector2f position)
{
    // Create a sfSprite and return a pointer of it
}
```
Now, you must draw the sprite before displaying the window :
```c
int workshop()
{
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});
    sfSprite *sprite = create_sprite(SPRITE_PATH, (sfVector2f){480, 270});

    while (/* While the window is open */) {
        // Handle events
        // Draw the sprite
        // Display the window
    }
    return 0;
}
```
_(Don't forget to destroy the sprite)_
<br/><br/>
_Utils functions:_
- sfTexture_createFromFile
- sfSprite_create
- sfSprite_setTexture
- sfSprite_setPosition
- sfSprite_getTexture
- sfTexture_destroy
- sfSprite_destroy

<br/>

If the trainers validate your code, go to [Exercise 5](./exercise5.md)
