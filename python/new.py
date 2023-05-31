import pygame
import random

# Initialize pygame
pygame.init()

# Set the width and height of the game window
window_width = 800
window_height = 600
window = pygame.display.set_mode((window_width, window_height))
pygame.display.set_caption("Snake Game")

# Set colors
black = (0, 0, 0)
white = (255, 255, 255)
red = (255, 0, 0)

# Set the size and speed of the snake
snake_size = 10
snake_speed = 15

# Initialize the clock
clock = pygame.time.Clock()

# Set the font style
font_style = pygame.font.SysFont(None, 50)

def display_score(score):
    # Display the score on the screen
    score_text = font_style.render("Score: " + str(score), True, white)
    window.blit(score_text, [10, 10])

def draw_snake(snake_size, snake_pixels):
    # Draw each segment of the snake
    for pixel in snake_pixels:
        pygame.draw.rect(window, white, [pixel[0], pixel[1], snake_size, snake_size])

def run_game():
    game_over = False
    game_close = False

    # Set the initial position of the snake
    x = window_width / 2
    y = window_height / 2
    x_speed = 0
    y_speed = 0

    snake_pixels = []
    snake_length = 1

    # Set the initial position of the food
    food_x = round(random.randrange(0, window_width - snake_size) / 10.0) * 10.0
    food_y = round(random.randrange(0, window_height - snake_size) / 10.0) * 10.0

    while not game_over:
        while game_close:
            # The game is over, display the final score and options to play again or quit
            window.fill(black)
            game_over_text = font_style.render("Game Over!", True, red)
            window.blit(game_over_text, [window_width / 2 - 100, window_height / 2 - 50])
            display_score(snake_length - 1)
            pygame.display.update()

            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    game_over = True
                    game_close = False
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_r:
                        run_game()

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    x_speed = -snake_size
                    y_speed = 0
                if event.key == pygame.K_RIGHT:
                    x_speed = snake_size
                    y_speed = 0
                if event.key == pygame.K_UP:
                    y_speed = -snake_size
                    x_speed = 0
                if event.key == pygame.K_DOWN:
                    y_speed = snake_size
                    x_speed = 0

        if x >= window_width or x < 0 or y >= window_height or y < 0:
            # The snake is out of bounds, end the game
            game_close = True
        x += x_speed
        y += y_speed
        window.fill(black)
        pygame.draw.rect(window, red, [food_x, food_y, snake_size, snake_size])
        snake_pixels.append([x, y])

        if len(snake_pixels) > snake_length:
            del snake_pixels[0]

        for pixel in snake_pixels[:-1]:
            if pixel == [x, y]:
                # The snake has collided with itself, end the game
                game_close = True

        draw_snake(snake_size, snake_pixels)
        display_score(snake_length - 1)

        pygame.display.update()

        if x == food_x and y == food_y:
            # The snake has eaten the food, increase the score and generate a new food position
            food_x = round(random.randrange(0, window_width - snake_size) / 10.0) * 10.0
            food_y = round(random.randrange(0, window_height - snake_size) / 10.0) * 10.0
            snake_length += 1

        clock.tick(snake_speed)

    pygame.quit()

# Run the game
run_game()
