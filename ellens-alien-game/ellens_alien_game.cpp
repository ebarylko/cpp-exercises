namespace targets {
// TODO: Insert the code for the alien class here
  class Alien {
  public:
    int x_coordinate;
    int y_coordinate;

    int get_health() {
      return this->health;
    }

    bool hit() {
     return this->health -= 1;
    }

    bool is_alive() {
      return this->health > 0;
    }

    bool teleport(int x_pos,int y_pos) {
      this->x_coordinate = x_pos;
      this->y_coordinate = y_pos;
      return true;
    }

    bool same_x_cor(int pos_1, int pos_2) {
      return pos_1 == pos_2;
    }

    bool same_y_cor(int pos_1, int pos_2) {
      return pos_1 == pos_2;
    }

    bool collision_detection(Alien a) {
      return same_x_cor(x_coordinate, a.x_coordinate) && same_y_cor(y_coordinate, a.y_coordinate);
    }

    Alien(int x_cor, int y_cor) {
      x_coordinate = x_cor;
      y_coordinate = y_cor;
    }
  private:
    int health{3};
  };
}  // namespace targets
