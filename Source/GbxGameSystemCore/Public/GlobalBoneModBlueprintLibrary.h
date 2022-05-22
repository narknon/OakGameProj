#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalBoneModBlueprintLibrary.generated.h"

class UGlobalBoneModifyProfileState;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGlobalBoneModBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalBoneModBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void K2_SetGBMP(const UGlobalBoneModifyProfileState* State, bool bEnabled);
    
};

