#pragma once
#include "CoreMinimal.h"
#include "ECARPartType.h"
#include "OakCARMenuPartType.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCARMenuPartType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bIsBody;
    
    UPROPERTY(EditAnywhere)
    ECARPartType PartType;
    
public:
    FOakCARMenuPartType();
};

