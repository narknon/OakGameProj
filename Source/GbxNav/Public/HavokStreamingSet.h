#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HavokStreamingSet.generated.h"

UCLASS()
class GBXNAV_API UHavokStreamingSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 SectionIdA;
    
    UPROPERTY()
    uint32 SectionIdB;
    
    UHavokStreamingSet();
};

