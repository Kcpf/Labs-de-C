int process_pixel(int level, int brightness) {
    int new_level;

    new_level = level + brightness;

    if (new_level > 255) return 255;

    return new_level;
}
