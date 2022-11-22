/*
** EPITECH PROJECT, 2022
** workshop.h
** File description:
** List of prototypes of the project.
*/

#ifndef WORKSHOP_H_
    #define WORKSHOP_H_

    #include <stdbool.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>

/**
 * @brief Events handling
 *
 * @param window Events from this window
 */
void event_handling(sfRenderWindow *window);

/**
 * @brief Check if the program can be executed
 *
 * @param argc Number of arguments given
 * @param argv Arguments given
 * @param env All the environment variables
 * @return true | false
 */
bool is_error(int argc, const char *const *argv, const char *const *env);

/**
 * @brief Loop function of the project
 *
 * @return int
 */
int workshop();

/**
 * @brief Create a window
 *
 * @param name Title of the window
 * @param dimensions Dimensions of the window
 * @return sfRenderWindow*
 */
sfRenderWindow *create_window(const char *name, sfVector2i dimensions);

/**
 * @brief Create a sprite
 *
 * @param filepath Filepath to the texture of the sprite
 * @param position Position of the sprite
 * @return sfSprite*
 */
sfSprite *create_sprite(const char *filepath, sfVector2f position);

/**
 * @brief Create a text
 *
 * @param content Content of the text
 * @param color Color of the text
 * @param position Position of the text
 * @return sfText*
 */
sfText *create_text(const char *content, sfColor color, sfVector2f position);

#endif // WORKSHOP_H_