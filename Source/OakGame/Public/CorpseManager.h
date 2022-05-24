#pragma once
#include "CoreMinimal.h"
#include "CorpseRecord.h"
#include "UObject/Object.h"
#include "CorpseManager.generated.h"

UCLASS(Transient, Config=Game)
class UCorpseManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FCorpseRecord> TrackedCorpses;
    
public:
    UCorpseManager();
};

