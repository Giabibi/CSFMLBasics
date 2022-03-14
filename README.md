# <span style="color:green">CSFML Basics</span>

During this WorkShop, we will see the _basics of csfml_.

The points covered are:
- Look the "display environnement variable"
- Creation of a window
- Creation of a sprite
- Creation of a text
- Event management

_<span style="color:#ff0000">Don't worry, it's normal if you don't finish.</span>_
<br/><br/>
# <span style="color:blue"> • Display environnement variable</span>

For your game to be displayed, it needs to have a graphical environment, hence this "DISPLAY" variable which is located in your environment.
**You can type this line in a terminal to verify that you have it:**
```bash
env | grep DISPLAY=
```
**You can remove the environment variable like this:**
```bash
unset DISPLAY
```
**And add it like this:**
```bash
export DISPLAY=:0.0
```

<span style="color:#ffff00">The objective of this first exercise is to check if this variable exists.</span>

Look at the main :
```c
int main (int argc, const char *const *argv, const char *const *env)
{
	if (is_error(argc, argv, env))
        return 84;
    return 0;
}
```

The "main" function calls the "is_error" function which will check if this famous variable exists :
```c
bool is_error (int argc, const char *const *argv, const char *const *env)
{
  // Check if there is DISPLAY variable in 'env'
}
```
<span style="color:#ffff00">It is now up to you to see if the variable exists.</span>
<br/><br/>
# <span style="color:blue"> • Window creation</span>

Now it's time to create a window.
To do this we will make a function named "create_window":
```c
sfRenderWindow *create_window(const char *name, sfVector2i *dimensions)
{
     // Create window and return it.
}
```

After doing that, replace the "**return 0;**" from ***main*** to "**return workshop();**"
The "main" function should now look like this:
```c
int main(int argc, const char *const *argv, const char *const *env)
{
    if (is_error(argc, argv, env))
        return 84;
    return workshop();
}
```

Now, you must display the window :
```c
int workshop()
{
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});

    // Display the window
    return 0;
}
```
_<span style="color:#ff0000">(Don't forget to destroy the window)</span>_
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
<br/><br/>
# <span style="color:blue"> • Events handling</span>

Okay, time to do the basics of a game: event management.
For this, we will create a function named "analyse_event" which will manage events:
```c
void analyse_event(sfRenderWindow *window, sfEvent event)
{
    // Handle events
}
```

Now, you must call the "analyse_event" function after displaying the window :
```c
int workshop()
{
    sfEvent event;
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});
    sfSprite *sprite = create_sprite("res/picture/sprite1.png", (sfVector2f){430, 188});
    sfText *text = create_text("This is a sprite", sfWhite, (sfVector2f){390, 150});

    // Draw the text
    // Draw the sprite
    // Display the window
	// Call "analyse_event"
    return 0;
}
```