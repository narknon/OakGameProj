#pragma once
#include "CoreMinimal.h"
#include "GbxAttributeModifierHandle.h"
#include "OakSDUEntry.h"
#include "Engine/NetSerialization.h"
#include "OakSDUContainer.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakSDUContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FOakSDUEntry> SDUList;
    
private:
    UPROPERTY(Transient)
    TArray<FGbxAttributeModifierHandle> SDUAttributeModifiers;
    
public:
    FOakSDUContainer();
};

