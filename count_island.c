/*
** EPITECH PROJECT, 2022
** Count Island PROJECT
** File description:
** Count Island PROJECT
*/

void explore_the_island(int x, int y, char** world, int count)
{
    world[x][y] = '0' + count;
    if ((world[x][y + 1] != '\0') && world[x][y + 1] == 'X')
        explore_the_island(x, y + 1, world, count);
    if ((y > 0) && world[x][y - 1] == 'X')
        explore_the_island(x, y - 1, world, count);
    if ((world[x + 1] != 0) && world[x + 1][y] == 'X')
        explore_the_island(x + 1, y, world, count);
    if ((x > 0) && world[x - 1][y] == 'X')
        explore_the_island(x - 1, y, world, count);
}

int find_an_island(int x, int y, char** world, int count)
{
    if (world[x][y] == 'X') {
        explore_the_island(x, y, world, count);
        return 1;
    }
    return 0;
}

int count_island(char** world)
{
    int count = 0;
    for (int x = 0; world[x] != 0; x++) {
        for (int y = 0; world[x][y] != '\0'; y++) {
            count = count + find_an_island(x, y, world, count);
        }
    }
    return count;
}
