#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraModeSet.generated.h"

class UCameraModeSetData;
class UCameraMode;

UCLASS()
class GBXCAMERAMODES_API UCameraModeSet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UCameraModeSetData* Data;
    
    UPROPERTY(Transient)
    TArray<UCameraMode*> Modes;
    
public:
    UCameraModeSet();
};

