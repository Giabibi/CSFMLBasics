# • Exercise 5: Text creation</span>

We will now create a text and display it.
<br/>
To do this we will make a function named "create_text":
```c
sfText *create_text(const char *content, sfColor color, sfVector2f position)
{
    // Create a sfText and return a pointer of it
}
```
Now, you must draw the sprite before displaying the window :
```c
int workshop()
{
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});
    sfSprite *sprite = create_sprite(SPRITE_PATH, (sfVector2f){480, 270});
    sfText *text = create_text("This is a Sprite", sfCyan, (sfVector2f){480, 400})

    while (/* While the window is open */) {
        // Handle events
        // Draw the text
        // Draw the sprite
        // Display the window
    }
    return 0;
}
```
_(Don't forget to destroy the sprite)_
<br/><br/>
_Utils functions:_
- sfText_create
- sfFont_createFromFile
- sfText_setFont
- sfText_setString
- sfText_setColor
- sfText_setPosition

<br/>

_**Well done !**_
<br/>
_**You have finished the workshop named CSFMLBasics !**_

If the trainers validate your code, you can go to the next workshop: [MapCSFML](https://github.com/Giabibi/WorkshopMapCSFML)
