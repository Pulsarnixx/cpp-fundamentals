#include "validation.hpp"
#include <algorithm>
#include <cctype>

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
    if (pass.size() < 9u) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    if (std::none_of(pass.begin(), pass.end(), [](unsigned char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    if (std::none_of(pass.begin(), pass.end(), [](unsigned char c) { return !std::isalnum(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    if (std::none_of(pass.begin(), pass.end(), [](unsigned char c) { return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2) {
    if (doPasswordsMatch(pass1, pass2)) {
        return checkPasswordRules(pass1);
    }

    return ErrorCode::PasswordsDoNotMatch;
}
