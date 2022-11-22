# • Exercise 3: Events handling

Okay, time to do the basics of a game: **event management**.
<br/>
For this, we will create a function named `event_handling` which will manage events:
```c
void event_handling(sfRenderWindow *window)
{
    // Handle the events and do the actions in accordance of them
}
```
In this function, you need to check if the user click on the close button on the window.
Now, you must draw the sprite before displaying the window :
```c
int workshop()
{
    sfRenderWindow *window = create_window("Workshop", (sfVector2i){960, 540});

    while (/* While the window is open */) {
        // Handle events
        // Display the window
    }
    return 0;
}
```
If he does that, you need to close the window.
<br/><br/>
_Utils functions:_
- sfRenderWindow_pollEvent
- sfRenderWindow_close

<br/>

If the trainers validate your code, go to [Exercise 4](./exercise4.md)
