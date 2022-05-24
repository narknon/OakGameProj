#pragma once
#include "CoreMinimal.h"
#include "GFxSHiFT.generated.h"

UENUM(BlueprintType)
namespace GFxSHiFT {
    enum Type {
        None,
        NotSignedIn,
        SignInAccount,
        CreateAccount,
        ResetPassword,
        CodeRedemption,
        RewardHistory,
        Offline,
    };
}

