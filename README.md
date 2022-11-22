# <span style="color:green">CSFML Basics</span>

During this WorkShop, we will see the _basics of csfml_.

The points covered are:
- Look the "display environnement variable"
- Creation of a window
- Event management
- Creation of a sprite
- Creation of a text

**At each step, you need to call the trainers to validate your code.**

_<span style="color:#ff0000">Don't worry, it's normal if you don't finish.</span>_
<br/><br/>
# <span style="color:blue"> • Sprite creation</span>

We will now create a sprite and display it.
To do this we will make a function named "create_sprite":
```c
sfSprite *create_sprite(const char *filepath, sfVector2f position)
{
    // Create a sprite and return it
}
```

Now, you must draw the sprite before displaying the window :
```c
int workshop()
{
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});
    sfSprite *sprite = create_sprite("res/picture/sprite1.png", (sfVector2f){430, 188});

    // Draw the sprite
    // Display the window
    return 0;
}
```
_<span style="color:#ff0000">(Don't forget to destroy the sprite)</span>_
<br/><br/>
# <span style="color:blue"> • Text creation</span>

Now it's time to create a text.
To do this we will make a function named "create_text":
```c
sfText *create_text(const char *content, sfColor color, sfVector2f position)
{
    // Create a text and return it
}
```

Now, you must draw the text before displaying the window :
```c
int workshop()
{
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});
    sfSprite *sprite = create_sprite("res/picture/sprite1.png", (sfVector2f){430, 188});
    sfText *text = create_text("This is a sprite", sfWhite, (sfVector2f){390, 150});

    // Draw the text
    // Draw the sprite
    // Display the window
    return 0;
}
```
_<span style="color:#ff0000">(Don't forget to destroy the text)</span>_

<br/>

If the trainers validate your code, go to [Exercise 1](./exercise1.md)
