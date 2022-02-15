int process_pixel(int level, int contrast) {
    int new_level;

    new_level = level * contrast;

    if (new_level > 255) return 255;

    return new_level;
}
