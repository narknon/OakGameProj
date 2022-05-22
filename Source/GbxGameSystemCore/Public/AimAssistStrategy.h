#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AimAssistStrategy.generated.h"

UCLASS(Abstract, Within=GbxPlayerController)
class GBXGAMESYSTEMCORE_API UAimAssistStrategy : public UObject {
    GENERATED_BODY()
public:
    UAimAssistStrategy();
};

