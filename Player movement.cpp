// Function to handle player movement while climbing
void handleClimbing() {
    // Check if the player is climbing
    if (player.isClimbing) {
        // Get the current position of the player
        sf::Vector2f currentPos = player.position;
        // Check if the W key is pressed
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            // Update the player's y position
            currentPos.y -= player.climbSpeed;
        }
        // Check if the S key is pressed
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            // Update the player's y position
            currentPos.y += player.climbSpeed;
        }
        // Check if the A key is pressed
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            // Update the player's x position
            currentPos.x -= player.climbSpeed;
        }
        // Check if the D key is pressed
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            // Update the player's x position
            currentPos.x += player.climbSpeed;
        }
        // Update the player's position
        player.position = currentPos;
    }
}
