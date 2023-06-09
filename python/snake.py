import pygame
import random

# Initialize Pygame
pygame.init()

# Window dimensions
width = 800
height = 600

# Colors (RGB format)
black = (0, 0, 0)
white = (255, 255, 255)
red = (255, 0, 0)

# Snake dimensions
snake_size = 10
snake_speed = 15

# Create the game window
window = pygame.display.set_mode((width, height))
pygame.display.set_caption("Snake Game")

clock = pygame.time.Clock()

# Font for displaying score
font_style = pygame.font.SysFont(None, 30)

def display_score(score):
    score_text = font_style.render("Score: " + str(score), True, white)
    window.blit(score_text, [10, 10])

def draw_snake(snake_list):
    for x in snake_list:
        pygame.draw.rect(window, black, [x[0], x[1], snake_size, snake_size])

def run_game():
    game_over = False
    game_close = False

    # Initial position of the snake
    x1 = width / 2
    y1 = height / 2

    # Initial movement of the snake
    x1_change = 0
    y1_change = 0

    # Initial length of the snake
    snake_list = []
    length_of_snake = 1

    # Generate the food at a random position
    food_x = round(random.randrange(0, width - snake_size) / 10.0) * 10.0
    food_y = round(random.randrange(0, height - snake_size) / 10.0) * 10.0

    while not game_over:

        while game_close:
            window.fill(black)
            game_over_text = font_style.render("Game Over! Press Q-Quit or C-Play Again", True, white)
            window.blit(game_over_text, [width / 2.5, height / 3])
            display_score(length_of_snake - 1)
            pygame.display.update()

            # Check for user input after game over
            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_c:
                        run_game()

        # Update the snake's position based on the user's input
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    x1_change = -snake_size
                    y1_change = 0
                elif event.key == pygame.K_RIGHT:
                    x1_change = snake_size
                    y1_change = 0
                elif event.key == pygame.K_UP:
                    y1_change = -snake_size
                    x1_change = 0
                elif event.key == pygame.K_DOWN:
                    y1_change = snake_size
                    x1_change = 0

        # Check if the snake hits the boundaries
        if x1 >= width or x1 < 0 or y1 >= height or y1 < 0:
            game_close = True

        x1 += x1_change
        y1 += y1_change
        window.fill(black)
        pygame.draw.rect(window, red, [food_x, food_y, snake_size, snake_size])
        snake_head = []
        snake_head.append(x1)
        snake_head.append(y1)
        snake_list.append(snake_head)
        if len(snake_list) > length_of_snake:
            del snake_list[0]

        # Check if the snake hits itself
        for x in snake_list[:-1]:
            if x == snake_head:
                game_close = True

        draw_snake(snake_list)
        display_score(length_of_snake - 1)

        pygame.display.update()

        # Check if the snake eats the food
        if x1 == food_x and y1 == food_y:
            food_x = round(random.randrange(0, width - snake_size) / 10.0) * 10.0
            food_y = round(random.randrange(0, height - snake_size) / 10.0) * 10.0
            length_of_snake += 1

        # Set the game speed
        clock.tick(snake_speed)

    pygame.quit()

# Start the game
run_game()
