#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakSDUEntry.generated.h"

class UOakSDUData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakSDUEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakSDUData* SDUData;
    
    UPROPERTY()
    int32 SDULevel;
    
    FOakSDUEntry();
};

