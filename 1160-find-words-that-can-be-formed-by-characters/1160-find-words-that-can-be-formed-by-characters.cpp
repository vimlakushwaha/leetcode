struct Solution {
    int countCharacters(
        std::vector<string> const & words,
        std::string const & chars
    ) {
        using Letters = std::array<unsigned, 'z' - 'a' + 1>;

        Letters stock{};
        for (auto const c : chars) {
            ++stock[c - 'a'];
        }

        int result{};
        for (auto const & word : words) {
            if (word.size() > chars.size()) {
                continue;
            }

            Letters letters{};
            for (auto const c : word) {
                ++letters[c - 'a'];
            }

            bool good{true};
            for (size_t i{}; i < std::tuple_size<Letters>(); ++i) {
                good &= letters[i] <= stock[i];
            }
            result += good * word.size();
        }
        return result;
    }
};
