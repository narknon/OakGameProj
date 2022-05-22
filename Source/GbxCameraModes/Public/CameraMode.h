#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraMode.generated.h"

class UCameraBehavior;
class UCameraModeData;

UCLASS()
class GBXCAMERAMODES_API UCameraMode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UCameraModeData* Data;
    
    UPROPERTY(Transient)
    TArray<UCameraBehavior*> Behaviors;
    
public:
    UCameraMode();
};

