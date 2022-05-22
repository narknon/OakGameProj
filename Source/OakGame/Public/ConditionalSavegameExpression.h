#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConditionalSavegameExpression.generated.h"

class UOakProfile;
class UOakSaveGame;
class UGbxCondition;

USTRUCT(BlueprintType)
struct FConditionalSavegameExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakSaveGame> SaveGame;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakProfile> Profile;
    
    OAKGAME_API FConditionalSavegameExpression();
};

