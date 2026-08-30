#include "validation.hpp"

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
    case ErrorCode::Ok:
        return {
            "Ok."
        }
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return {
            "Password needs at least nine characters."
        }
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return {
            "Password needs at least one number."
        }
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return {
            "Password needs at least one special character."
        }
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return {
            "Password needs at least one uppercase letter."
        }
        break;
    case ErrorCode::PasswordsDoNotMatch:
        return {
            "Passwords do not match."
        }
        break;
    default:
        return {
            "Invalid error code."
        }
        break;
    }
}
