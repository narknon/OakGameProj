#pragma once
#include "CoreMinimal.h"
#include "OakLightBeamInitializationData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OakLightBeamStatics.generated.h"

UCLASS(BlueprintType)
class OAKGAME_API UOakLightBeamStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakLightBeamStatics();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateOakLightBeamFromData(const FOakLightBeamInitializationData& InitData);
    
};

