#include "validation.hpp"
#include <random>

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
    case ErrorCode::Ok:
        return {
            "Ok"};
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return {
            "Password needs to have at least nine characters"};
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return {
            "Password needs to have at least one number"};
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return {
            "Password needs to have at least one special character"};
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return {
            "Password needs to have at least one uppercase letter"};
        break;
    case ErrorCode::PasswordsDoNotMatch:
        return {
            "Passwords do not match"};
        break;
    default:
        return {
            "Invalid error code"};
        break;
    }
}

bool doPasswordsMatch(const std::string& pass1, const std::string& pass2) {
    return (pass1 == pass2);
}

ErrorCode checkPasswordRules(const std::string& pass) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 4);

    const int number = distrib(gen);

    return static_cast<ErrorCode>(number);
}

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2) {
    if (doPasswordsMatch(pass1, pass2)) {
        return checkPasswordRules(pass1);
    }

    return ErrorCode::PasswordsDoNotMatch;
}
