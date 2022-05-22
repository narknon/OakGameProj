#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceSpec.h"
#include "OakAbilityResourceSpec_SirenRushStack.generated.h"

class USirenCharacterComponent;
class USirenRushStackData;

USTRUCT(BlueprintType)
struct FOakAbilityResourceSpec_SirenRushStack : public FGbxAbilityResourceSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    USirenCharacterComponent* SirenComponent;
    
    UPROPERTY(BlueprintReadWrite)
    USirenRushStackData* RushStackData;
    
    OAKGAME_API FOakAbilityResourceSpec_SirenRushStack();
};

