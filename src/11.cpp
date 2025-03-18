int main() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<float> dist(0.0f, 1.0f);

    float x = dist(mt), y = dist(mt);

    if (x > y) {
        return x;
    } else {
        return y;
    }
}
