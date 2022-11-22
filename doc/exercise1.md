# • Exercise 1: Check the display environnement variable

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

_The objective of this first exercise is to check if this variable exists._
<br/>
Look at the main :
```c
int main(int argc, const char *const *argv, const char *const *env)
{
	if (is_error(argc, argv, env))
        return 84;
    return 0;
}
```

The `main` function calls the `is_error` function which will check if this famous variable exists :
```c
bool is_error(int argc, const char *const *argv, const char *const *env)
{
  // Check if there is DISPLAY variable in 'env'
}
```
_It's now up to you to see if the variable exists._
<br/><br/>
_Utils functions:_
- strncmp

<br/>

If the trainers validate your code, go to [Exercise 2](./exercise2.md)
