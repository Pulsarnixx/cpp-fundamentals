#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode code);
bool doPasswordsMatch(const std::string& pass1, const std::string& pass2);
ErrorCode checkPasswordRules(const std::string& pass);

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2);

#endif
