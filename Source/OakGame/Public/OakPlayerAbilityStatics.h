#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OakPlayerAbilityAllyQueryResult.h"
#include "OakPlayerAbilityAllyQuerySpec.h"
#include "OakPlayerAbilityStatics.generated.h"

class AOakCharacter_Player;

UCLASS(BlueprintType)
class UOakPlayerAbilityStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakPlayerAbilityStatics();
    UFUNCTION(BlueprintCallable)
    static FOakPlayerAbilityAllyQueryResult QueryAllies(AOakCharacter_Player* SourcePlayer, const FOakPlayerAbilityAllyQuerySpec& Spec);
    
};

