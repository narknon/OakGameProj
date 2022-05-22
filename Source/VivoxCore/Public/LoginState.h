#pragma once
#include "CoreMinimal.h"
#include "LoginState.generated.h"

UENUM(BlueprintType)
enum class LoginState :  {
    LoggedOut,
    LoggingIn,
    LoggedIn,
    LoggingOut,
};

