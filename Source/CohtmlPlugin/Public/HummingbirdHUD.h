#pragma once
#include "CoreMinimal.h"
#include "CohtmlHUD.h"
#include "HummingbirdHUD.generated.h"

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHummingbirdHUD : public UCohtmlHUD {
    GENERATED_BODY()
public:
    UHummingbirdHUD();
};

