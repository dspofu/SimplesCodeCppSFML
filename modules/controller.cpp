#include "./controller.h"

  Controller::Controller(int width, int height): width(width), height(height) {}

  void Controller::moveUp(sf::CircleShape &person, float speed, float y) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && y > 0) person.move(0, -speed);
  }

  void Controller::moveDown(sf::CircleShape &person, float speed, float y) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && y < height - person.getRadius() * 2) person.move(0, speed);
  }

  void Controller::moveLeft(sf::CircleShape &person, float speed, float x) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && x > 0) person.move(-speed, 0);
  }

  void Controller::moveRight(sf::CircleShape &person, float speed, float x) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && x < width - person.getRadius() * 2) person.move(speed, 0);
  }